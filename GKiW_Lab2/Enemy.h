#pragma once
#include "CollisionObject.h"
#include "Bullet.h"


class Enemy : public CollisionObject
{
private:
	int hp;
public:
	void Shot(std::vector <std::shared_ptr<CollisionObject>>& enemiesVec, std::vector<std::shared_ptr<CollisionObject>>& bulletVec);

	void UpdateShot(std::vector<std::shared_ptr<CollisionObject>>& bulletVec, int owner);

	Enemy(float collisionLengthX, float collisionLengthZ,
		float x, float y, float z,  float angle, float size, std::shared_ptr<LoadOBJ>& objectLoader, int hp = 100)
		:hp{ hp },
		CollisionObject{ collisionLengthX,  collisionLengthZ, x,  y,  z, angle,  size, objectLoader }{};

	~Enemy() {};
};