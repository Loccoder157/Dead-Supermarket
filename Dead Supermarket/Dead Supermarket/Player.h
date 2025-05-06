#pragma once
#include <raylib.h>
#include "default_value.h"

class Player
{
public:
	Player(Vector2 Position, int Speed);
	~Player();
	void draw(float& f_time);
	void move(bool b_canmove);
	Rectangle gethitbox();
	Vector2 getpositon();
	void setposition(float x,float y);

private:
	Vector2 position;
	int speed;
	int n_index_animation = 0;
	int n_index_animation_tmp = 1;
	int n_currentFrame = 0;
	float f_frameTime = 0.1f;
	Texture2D animation_front_run = LoadTexture(ch_path_front_run);
	Texture2D animation_front_run_r = LoadTexture(ch_path_front_run_r);
	Texture2D animation_front_run_l = LoadTexture(ch_path_front_run_l);
	Texture2D animation_left_run = LoadTexture(ch_path_left_run);
	Texture2D animation_left_run_u = LoadTexture(ch_path_left_run_u);
	Texture2D animation_right_run = LoadTexture(ch_path_right_run);
	Texture2D animation_right_run_u = LoadTexture(ch_path_right_run_u);
	Texture2D animation_up_run = LoadTexture(ch_path_up_run);
	Texture2D animation_up = LoadTexture(ch_path_up);
	Texture2D animation_left = LoadTexture(ch_path_left);
	Texture2D animation_right = LoadTexture(ch_path_right);
	Texture2D animation_front = LoadTexture(ch_path_front);
};

