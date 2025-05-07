#include "Barsys.h"

Bar::Bar(Vector2 v2_pos, int n_w, int n_h, int n_maxvar)
{
	v2_position = v2_pos;
	n_width = n_w;
	n_height = n_h;
	n_maxvalue = n_maxvar;
}

Bar::~Bar()
{

}

void Bar::setvalue(int var)
{
	n_currentvalue = var;

}

void Bar::draw(Color colorbar, Color colorlinebar)
{
	float f_valuePercent = (float)n_currentvalue / n_maxvalue;
	DrawRectangle(v2_position.x, v2_position.y, (int)(n_width*f_valuePercent), n_height, colorbar);
	DrawRectangleLines(v2_position.x, v2_position.y, n_width, n_height, colorlinebar);
}