#pragma once
#include <iostream>
#include <raylib.h>

using namespace std;


// Default value
const int n_fps = 60;
const int n_width = 1100;
const int n_height = 700;
extern const char* ch_title;
const int n_speed_player = 1;
const float f_zoomplayer = 2.0f;
const int n_player_width = 25;
const int n_player_height = 40;
const int n_pushbackplayer = 2;
// link path assets

extern const char* ch_path_background;
extern const char* ch_path_button_start;
extern const char* ch_path_button_exit;
extern const char* ch_path_front_run;
extern const char* ch_path_front_run_r;
extern const char* ch_path_front_run_l;
extern const char* ch_path_left_run;
extern const char* ch_path_left_run_u;
extern const char* ch_path_right_run_u;
extern const char* ch_path_up_run;
extern const char* ch_path_up;
extern const char* ch_path_left;
extern const char* ch_path_right;
extern const char* ch_path_front;
extern const char* ch_path_right_run;
extern const char* ch_mappath;
// map path

extern const char* ch_floor01;
extern const char* ch_wallblock;
// font
extern Font font_title;
