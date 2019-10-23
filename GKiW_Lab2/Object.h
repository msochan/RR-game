#pragma once
#include <memory>
#include "LoadOBJ.h"


class Object
{
protected:
	float angle;
	float size;
	std::shared_ptr<LoadOBJ> objectLoader;
public:
	float x, y, z;

	virtual void Render() = 0;

	Object(float x, float y, float z)
		:x{ x }, y{ y }, z{ z }, angle{ 0 }, size{ 0 }{};

	Object(float x, float y, float z, float angle, float size, std::shared_ptr<LoadOBJ>& objectLoader)
		:x{ x }, y{ y }, z{ z }, angle{ angle }, size{ size }, objectLoader{ objectLoader }
	{
		this->objectLoader->SetObjectModel(this->objectLoader->Load(objectLoader->GetPath()));
		this->objectLoader->SetObjectTexture(objectLoader->GetObjectTexture());
	};

	Object(const Object& source)
		:x{ source.x }, y{ source.y }, z{ source.z }, angle{ source.angle }, size{ source.size }
	{
		*objectLoader = *source.objectLoader;
	};

	Object(Object&& source) noexcept
		:x{ source.x }, y{ source.y }, z{ source.z }, angle{ source.angle }, size{ source.size }
	{
		*objectLoader = *source.objectLoader;
		source.objectLoader = nullptr;
	};

	virtual ~Object() {};
};