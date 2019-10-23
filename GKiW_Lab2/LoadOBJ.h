#pragma once
#include <vector>
#include <string>


class LoadOBJ
{
private:
	GLuint objectModel;
	GLuint objectTexture;
	std::string path;
public:
	struct vec3 {
		float x, y, z;
	};

	struct vec2 {
		float x, y;
	};

	GLuint Load(std::string path);

	void SetPath(std::string path) { this->path = path; }
	std::string GetPath() { return this->path; }

	void SetObjectModel(GLuint objectModel) { this->objectModel = objectModel; }
	GLuint GetObjectModel() { return this->objectModel; }

	void SetObjectTexture(GLuint objectTexture) { this->objectTexture = objectTexture; }
	GLuint GetObjectTexture() { return this->objectTexture; }

	LoadOBJ(std::string path, GLuint objectTexture)
	{
		this->path = path;
		this->objectTexture = objectTexture;
	};

	~LoadOBJ() {};
};