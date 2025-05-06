#include "Player.h"

Player::Player(Vector2 Position, int Speed)
{
	position = Position;
	speed = Speed;
}

Player::~Player()
{
	UnloadTexture(animation_front_run);
	UnloadTexture(animation_front_run_r);
	UnloadTexture(animation_front_run_l);
	UnloadTexture(animation_left_run);
	UnloadTexture(animation_left_run_u);
	UnloadTexture(animation_right_run);
	UnloadTexture(animation_right_run_u);
	UnloadTexture(animation_up_run);
	UnloadTexture(animation_up);
	UnloadTexture(animation_left);
	UnloadTexture(animation_right);
	UnloadTexture(animation_front);
}

void Player::draw(float& f_time)
{
	if (n_index_animation > 0)
	{ 
		switch (n_index_animation)
		{
		case 1:
		{
			int n_frameWidth = animation_up_run.width / 9;
			if (f_time >= f_frameTime) {
				n_currentFrame++;
				if (n_currentFrame >= 9) n_currentFrame = 0;
				f_time = 0.0f;
			}
			Rectangle ani = {n_currentFrame * n_frameWidth, 0, n_frameWidth, animation_up_run.height};
			DrawTextureRec(animation_up_run, ani, position, WHITE);
			break;
		}
		case 2:
		{
			int n_frameWidth = animation_front_run.width / 9;
			if (f_time >= f_frameTime) {
				n_currentFrame++;
				if (n_currentFrame >= 9) n_currentFrame = 0;
				f_time = 0.0f;
			}
			Rectangle ani = { n_currentFrame * n_frameWidth, 0, n_frameWidth, animation_front_run.height };
			DrawTextureRec(animation_front_run, ani, position, WHITE);
			break;
		}
		case 3:
		{
			int n_frameWidth = animation_left_run.width / 9;
			if (f_time >= f_frameTime) {
				n_currentFrame++;
				if (n_currentFrame >= 9) n_currentFrame = 0;
				f_time = 0.0f;
			}
			Rectangle ani = { n_currentFrame * n_frameWidth, 0, n_frameWidth, animation_left_run.height };
			DrawTextureRec(animation_left_run, ani, position, WHITE);
			break;
		}
		case 4:
		{
			int n_frameWidth = animation_right_run.width / 9;
			if (f_time >= f_frameTime) {
				n_currentFrame++;
				if (n_currentFrame >= 9) n_currentFrame = 0;
				f_time = 0.0f;
			}
			Rectangle ani = { n_currentFrame * n_frameWidth, 0, n_frameWidth, animation_right_run.height };
			DrawTextureRec(animation_right_run, ani, position, WHITE);
			break;
		}
		default:
			break;
		}
	}
	else {
		switch (n_index_animation_tmp)
		{
		case 1:
			DrawTextureV(animation_up, position, WHITE);
			break;
		case 2:
			DrawTextureV(animation_front, position, WHITE);
			break;
		case 3:
			DrawTextureV(animation_left, position, WHITE);
			break;
		case 4:
			DrawTextureV(animation_right, position, WHITE);
			break;
		default:
			break;
		}
	}
}

void Player::move(bool b_canmove)
{
	if (b_canmove)
	{
		if (IsKeyDown(KEY_W))
		{
			n_index_animation_tmp = 1;
			n_index_animation = 1;
			position.y -= speed;
		}
		if (IsKeyDown(KEY_S))
		{
			n_index_animation_tmp = 2;
			n_index_animation = 2;
			position.y += speed;
		}
		if (IsKeyDown(KEY_A))
		{
			n_index_animation_tmp = 3;
			n_index_animation = 3;
			position.x -= speed;
		}
		if (IsKeyDown(KEY_D))
		{
			n_index_animation_tmp = 4;
			n_index_animation = 4;
			position.x += speed;
		}
		if (!IsKeyDown(KEY_W) &&
			!IsKeyDown(KEY_S) &&
			!IsKeyDown(KEY_A) &&
			!IsKeyDown(KEY_D))
		{
			n_index_animation = 0;
		}
	}
}

Vector2 Player::getpositon()
{
	return position;
}

Rectangle Player::gethitbox() 
{
	Rectangle hitbox{position.x, position.y, n_player_width, n_player_height};
	return hitbox;
}

void Player::setposition(float x, float y)
{
	position.x = x;
	position.y = y;
}