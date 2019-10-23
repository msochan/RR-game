#pragma once
#include "Player.h"


class HUD
{
public:
	void HP(Player &player);

	void GameOver(bool freeze);

	void Win(bool freeze_win);

	HUD() {};

	~HUD() {};
};