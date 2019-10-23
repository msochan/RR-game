#include "stdafx.h"
#include "Enemy.h"


void Enemy::Shot(std::vector <std::shared_ptr<CollisionObject>>& enemiesVec, std::vector<std::shared_ptr<CollisionObject>>& bulletVec)
{
		auto it = enemiesVec.begin();
		while (it != enemiesVec.end()) 
		{
			int randomize = rand() % 180 + 0;
			if ((*it) != nullptr) 
			{
				if (randomize == 4 || randomize == 8 && bulletVec.size() < 4)
				{
					std::shared_ptr<Bullet> newBullet;
					bulletVec.push_back(newBullet = std::make_shared<Bullet>((*it)->x, (*it)->y, (*it)->z));
				}
			}
			++it;
		}
}

void Enemy::UpdateShot(std::vector<std::shared_ptr<CollisionObject>>& bulletVec, int owner)
{
		auto it = bulletVec.begin();
		while (it != bulletVec.end()) 
		{
			if ((*it) != nullptr) 
			{
				(*it)->Move(owner);
				if ((*it)->z <= -13) 
					it=bulletVec.erase(it);
				else
					++it;
			}
		}	
}