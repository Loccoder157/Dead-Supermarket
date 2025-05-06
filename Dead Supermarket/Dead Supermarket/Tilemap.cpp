#include "Tilemap.h"
using namespace std;

Map::Map(int n_cols, int n_rows, int n_tilesize_inp)
{
	this->n_cols = n_cols;
	this->n_rows = n_rows;
	this->n_tilesize = n_tilesize_inp;
	tilemap = vector<vector<int>>(n_rows,vector<int>(n_cols, 0));
	fstream inputmap(ch_mappath);
	for (int i = 0; i < n_cols; i++) {
		for (int j = 0; j < n_rows; j++) {
			int n_tmp;
			inputmap >> n_tmp;
			tilemap[i][j] = n_tmp;
		}
	}
}

Map::~Map()
{

}

void Map::draw(Rectangle hitboxplayer,Player& player)
{
	for (int y = 0; y < n_rows; y++)
	{
		for (int x = 0; x < n_cols; x++)
		{
			int n_tile = tilemap[y][x];
			Vector2 v2_pos = {x * n_tilesize, y * n_tilesize};
			if (n_tile == 0)
			{
				DrawTextureV(floor01, v2_pos, WHITE);
			}
			else if (n_tile == 1)
			{
				Rectangle hitboxwall{v2_pos.x, v2_pos.y, 16, 16};
				DrawTextureV(wallblock,v2_pos, WHITE);
				if (CheckCollisionRecs(hitboxplayer, hitboxwall))
				{
					float dx = ((hitboxplayer.x + hitboxplayer.width)/2) - ((hitboxwall.x + hitboxwall.width) / 2);
					float dy = ((hitboxplayer.y + hitboxplayer.height) / 2) - ((hitboxwall.y + hitboxwall.height) / 2);
					float absDX = fabs(dx);
					float absDY = fabs(dy);
					
					if (absDX > absDY) {
						if (dx > 0) player.setposition(hitboxplayer.x + n_pushbackplayer, hitboxplayer.y);
						else 
						{
							player.setposition(hitboxplayer.x - n_pushbackplayer, hitboxplayer.y);
						}
					}
					else
					{
						if (dy > 0) player.setposition(hitboxplayer.x, hitboxplayer.y + n_pushbackplayer);
						else
						{
							player.setposition(hitboxplayer.x, hitboxplayer.y - n_pushbackplayer);
						}
					}
				}
			}
		}
	}
}