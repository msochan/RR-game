#include "stdafx.h"
#include "Bullet.h"


void Bullet::Render()
{
	glPushMatrix();
	glTranslatef(x, y, z);
	glScalef(3.0f,3.0f,3.0f);
	glutSolidSphere(.03f, 8, 8);
	glPopMatrix();
}

void Bullet::Move(int direction)
{
	if (direction < 0)
	{
		z = z - speed;
		min.z = min.z - speed;
		max.z = max.z - speed;
	}
	else
	{
		z = z + speed;
		min.z = min.z + speed;
		max.z = max.z + speed;
	}
}