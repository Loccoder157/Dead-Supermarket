#pragma once
#include "default_value.h"
#include "Player.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <math.h>

class Map
{
public:
	Map(int n_cols, int rows, int n_tilesize_inp);
	~Map();
	void draw(Rectangle hitboxplayer,Player &player);
	int n_tilesize;
	int n_cols;
	int n_rows;
	//std::vector<std::vector<int>> tilemap(n_rows, std::vector<int>(n_cols, 0));
	std::vector<std::vector<int>> tilemap;
	Texture2D floor01 = LoadTexture(ch_floor01);
	Texture2D wallblock = LoadTexture(ch_wallblock);
};
