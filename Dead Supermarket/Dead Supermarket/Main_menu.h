#pragma once
#include <raylib.h>

class Background
{
public:
	Background(const char* ch_path);
	~Background();
	void v_Draw_background();
private:
	Texture2D texture;
};
