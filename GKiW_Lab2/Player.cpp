#include "stdafx.h"
#include "Player.h"


void Player::Move(int direction)
{
	int limit = 0;
	if (direction < 0)
	{
		limit = -7;
		if (x >= limit)
		{
			x = x + (speed * direction);
			min.x = min.x + (speed * direction);
			max.x = max.x + (speed * direction);
		}
	}	
	else
	{
		limit = 8;
		if (x < limit)
		{
			x = x + (speed * direction);
			min.x = min.x + (speed * direction);
			max.x = max.x + (speed * direction);
		}
	}		
}

void Player::Shot(float x, float y, float z, std::vector<std::shared_ptr<CollisionObject>> &bulletVec)
{
	clock_t current = clock();
	int dif = current - lastShotGap;
	int weaponLimit = 1200;
	if (dif >= weaponLimit) 
	{
		std::shared_ptr<Bullet> newBullet;
		lastShotGap = current;
		bulletVec.push_back(newBullet = std::make_shared<Bullet>(x, y, z));
		PlaySound("res/shot.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
}

void Player::UpdateShot(std::vector<std::shared_ptr<CollisionObject>>& bulletVec, int owner)
{
	auto it = bulletVec.begin();
	while (it != bulletVec.end())
	{
		if ((*it) != nullptr)
		{
			(*it)->Move(owner);
			if ((*it)->z <= -13)
				it = bulletVec.erase(it);
			else
				++it;
		}
	}
}