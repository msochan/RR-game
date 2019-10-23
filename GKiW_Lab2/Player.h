#pragma once
#include <time.h>
#include <mmsystem.h>
#include "CollisionObject.h"
#include "Bullet.h"


class Player :public CollisionObject
{
private:
	float speed;
	int hp;
	clock_t lastShotGap;
public:
	virtual void Move(int direction);

	void Shot(float x, float y, float z, std::vector<std::shared_ptr<CollisionObject>>& bulletVec);

	void UpdateShot(std::vector<std::shared_ptr<CollisionObject>>& bulletVec, int owner);
	
	void SetHP(int hp) { this->hp = hp; };
	int GetHP() { return hp; };

	Player(float collisionLengthX, float collisionLengthZ,
		float x, float y, float z,  float angle, float size, std::shared_ptr<LoadOBJ>&  objectLoader,
		float speed = 0.1, int hp = 100, clock_t lastShotGap = clock())
		:CollisionObject{ collisionLengthX, collisionLengthZ, x,  y,  z, angle,  size,  objectLoader },
		speed{ speed }, hp{ hp }, lastShotGap{ lastShotGap }{};

	~Player() {};
};