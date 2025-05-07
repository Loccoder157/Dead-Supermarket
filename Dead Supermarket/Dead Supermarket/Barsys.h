#pragma once
#include <raylib.h>

class Bar
{
public:
	Bar(Vector2 v2_pos, int n_w, int n_h, int n_maxvar);
	~Bar();
	void setvalue(int var);
	void draw(Color colorbar, Color colorlinebar);
private:
	Vector2 v2_position;
	int n_width;
	int n_height;
	int n_maxvalue;
	int n_currentvalue;
};

