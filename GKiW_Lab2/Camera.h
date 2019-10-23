#pragma once
class Camera
{
public:
	float position_x;
	float position_y;
	float position_z;
	float dir_x, dir_y, dir_z;

	Camera() 
	{
		position_x = 0.0f;
		position_y = 10.0f;
		position_z = 2.1f;

		dir_x = 0.0f;
		dir_y = -1.0f;
		dir_z = -0.8f;
	};

	~Camera() {};
};