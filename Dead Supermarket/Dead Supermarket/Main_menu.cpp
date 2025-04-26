#include "Main_menu.h"

Background::Background(const char* ch_path) 
{
	texture = LoadTexture(ch_path);
}

Background::~Background()
{
	UnloadTexture(texture);
}

void Background::v_Draw_background()
{
	DrawTexture(texture, 0, 0, WHITE);
}