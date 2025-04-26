#pragma once
#include <raylib.h>

class Cameraworld
{
public:
	Cameraworld(int n_screenWidth, int n_screenHeight, float f_zoomcam);
	~Cameraworld();
	void settarget(Vector2 positiontarget);
	Camera2D getcamera();
private:
	int n_screenWidth;
	int n_screenHeight;
	int n_widthcam;
	int n_heghtcam;
	Camera2D camera = {0};
	float f_zoom;
};

