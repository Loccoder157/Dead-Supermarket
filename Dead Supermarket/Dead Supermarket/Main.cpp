#include <raylib.h>
#include <iostream>
#include <string>
#include "default_value.h"
#include "Main_menu.h"
#include "Button.h"
#include "Player.h"
#include "Camera.h"
#include "Tilemap.h"
#include "Barsys.h"

using namespace std;

int main()
{
	// create window
	InitWindow(n_width,n_height,ch_title);
	
	// set fps
	SetTargetFPS(n_fps);

	// init game
	bool b_gameinit = true;
	bool b_inmenu = true;

	Background background{ch_path_background};
	
	// button in game
	Button start_b{ch_path_button_start, {370, 200}, 0.65};
	Button exit_b{ch_path_button_exit, {370, 400}, 0.65};
	// player
	Player player{Vector2{200,100}, n_speed_player};

	// camera
	Cameraworld camera{n_width, n_height, f_zoomplayer};

	// time animation
	float f_timeCounter = 0.0f;

	// tilemap
	Map map{100, 100, 16};

	//test
	Bar bartest{{10, 30}, 200, 30, 100};
	int testvar = 0;
	// game loop
	while (!WindowShouldClose() && b_gameinit)
	{
		// get times
		f_timeCounter += GetFrameTime();

		// set camera 

		camera.settarget(player.getpositon());

		BeginDrawing();
		// clear window
		ClearBackground(RAYWHITE);
		if (b_inmenu)
		{
			// bg
			background.v_Draw_background();
			// button start, exit
			start_b.Draw();
			exit_b.Draw();
			
			if (start_b.isPressed(GetMousePosition(), IsMouseButtonPressed(MOUSE_BUTTON_LEFT))) b_inmenu = false;
			if (exit_b.isPressed(GetMousePosition(), IsMouseButtonPressed(MOUSE_BUTTON_LEFT))) b_gameinit = false;
			// title game;
			DrawTextEx(font_title, ch_title, Vector2{200, 70}, 80, 4, RED);
		}
		BeginMode2D(camera.getcamera());
		if (!b_inmenu)
		{

			// mapdraw
			map.draw(player.gethitbox(), player);
			player.move(true);
			player.draw(f_timeCounter);
		}

		EndMode2D();
		if (!b_inmenu)
		{
			if (IsKeyDown(KEY_I)) {
				if (testvar < 100)    testvar++;
			}
			else {
				if (testvar >= 0)	testvar--;
			}
			bartest.setvalue(testvar);
			bartest.draw(RED, BLACK);
		}
		EndDrawing();
	}

	CloseWindow();
}