#include "Button.h"

Button::Button(const char* path, Vector2 Position, float size)
{
	Image image = LoadImage(path);
	
	int originalwidth = image.width;
	int originalheight = image.height;

	int newwidth = static_cast<int> (originalwidth * size);
	int newheight = static_cast<int> (originalheight * size);

	ImageResize(&image, newwidth, newheight);

	texture = LoadTextureFromImage(image);
	UnloadImage(image);

	position = Position;
}

Button::~Button()
{
	UnloadTexture(texture);
}

void Button::Draw() {
	DrawTextureV(texture, position, WHITE);
}

bool Button::isPressed(Vector2 mousePos, bool mousePressed) {
	Rectangle rect = {position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height)};

	if (CheckCollisionPointRec(mousePos, rect) && mousePressed)
	{
		return true;
	}
	return false;
}