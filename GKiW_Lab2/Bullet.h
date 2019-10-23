#pragma once
#include "CollisionObject.h"


class Bullet : public CollisionObject
{
private:
	float speed;
public:
	virtual void Move(int direction);

	virtual void Render();

	void SetSpeed(float speed) { this->speed = speed; };
	float GetSpeed() { return speed; };
	
	Bullet(float x, float y, float z, float collisionLengthX = 0.15, float collisionLengthZ = 0.15, float speed = 0.1)
		:CollisionObject{ collisionLengthX, collisionLengthZ, x,  y,  z }, speed{ speed }{};

	~Bullet() {};
};