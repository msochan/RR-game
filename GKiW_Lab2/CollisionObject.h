#pragma once
#include "stdafx.h"
#include "LoadOBJ.h"
#include "Object.h"


class CollisionObject : public Object
{
private:
	float collisionLengthX;
	float collisionLengthZ;
protected:
	vec3 min;
	vec3 max;
	vec2 length;
public:
	virtual void Render();

	virtual void Move(int direction) {};

	void DrawCollisionBox();

	bool CheckCollision(CollisionObject &element);

	CollisionObject(float collisionLengthX, float collisionLengthZ, 
		float x, float y, float z, float angle, float size, std::shared_ptr<LoadOBJ>& objectLoader)
		:collisionLengthX{ collisionLengthX }, collisionLengthZ{ collisionLengthZ },
		Object{ x, y, z, angle,  size, objectLoader }{
		length.x = collisionLengthX;
		length.z = collisionLengthZ;

		min.x = x - length.x / 2;
		max.x = x + length.x / 2;

		min.z = z - length.z / 2;
		max.z = z + length.z / 2;
	}

	CollisionObject(float collisionLengthX, float collisionLengthZ, float x, float y, float z)
		:collisionLengthX{ collisionLengthX }, collisionLengthZ{ collisionLengthZ }, 
		Object{ x, y, z}{
		length.x = collisionLengthX;
		length.z = collisionLengthZ;

		min.x = x - length.x / 2;
		max.x = x + length.x / 2;

		min.z = z - length.z / 2;
		max.z = z + length.z / 2;
	}

	virtual ~CollisionObject() {};
};