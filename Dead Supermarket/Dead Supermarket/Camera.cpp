#include "Camera.h"

Cameraworld::Cameraworld(int n_screenWidth, int n_screenHeight, float f_zoomcam)
{
	n_widthcam = n_screenWidth / 2.0f;
	n_heghtcam = n_screenHeight / 2.0f;
	camera.offset = {static_cast<float>(n_widthcam - 32), static_cast<float>(n_heghtcam - 32)};
	camera.rotation = 0.0f;
	f_zoom = f_zoomcam;
	camera.zoom = f_zoom;
}

Cameraworld::~Cameraworld()
{

}

void Cameraworld::settarget(Vector2 positiontarget)
{
	camera.target = positiontarget;
}

Camera2D Cameraworld::getcamera()
{
	return camera;
}