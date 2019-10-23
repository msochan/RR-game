#pragma once
#include <gl\GL.h>


GLuint texTurret;
GLuint terrainTexture;
GLuint texPlayer;
GLuint shipTexture;
GLuint texBigShip;
GLuint desertObjectTexture;

GLuint LoadTexture(char* file, int magFilter, int minFilter) 
{
	Bitmap* tex = new Bitmap();
	if (!tex->loadBMP(file)) {
		printf("ERROR: Cannot read texture file \"%s\".\n", file);
		return -1;
	}
	GLuint texId;
	glGenTextures(1, &texId);

	glBindTexture(GL_TEXTURE_2D, texId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magFilter); 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minFilter); 

	if (minFilter == GL_LINEAR_MIPMAP_LINEAR || minFilter == GL_LINEAR_MIPMAP_NEAREST) {
		gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGBA, tex->width, tex->height, GL_RGB, GL_UNSIGNED_BYTE, tex->data);
	}
	else {
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tex->width, tex->height, 0, GL_RGB, GL_UNSIGNED_BYTE, tex->data);
	}

	delete tex;

	return texId;
}

void LoadTextures() 
{
	terrainTexture = LoadTexture("res\\river_desert.bmp", GL_LINEAR, GL_LINEAR);
	texTurret = LoadTexture("res\\turret.bmp", GL_LINEAR, GL_LINEAR);
	texPlayer = LoadTexture("res\\plane2.bmp", GL_LINEAR, GL_LINEAR);
	desertObjectTexture = LoadTexture("res\\assets_desert.bmp", GL_NEAREST, GL_NEAREST);
	shipTexture = LoadTexture("res\\yacht_diff_v2.bmp", GL_LINEAR, GL_LINEAR);
	texBigShip = LoadTexture("res\\bigship.bmp", GL_LINEAR, GL_LINEAR);
}

void DrawWhite()
{
	float m_amb[] = { 1.0f, 1.0f, 1.0f };
	float m_dif[] = { 0.0f, 0.0f, 0.0f };
	float m_spe[] = { 0.0f, 0.0f, 0.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, m_amb);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, m_dif);
	glMaterialfv(GL_FRONT, GL_SPECULAR, m_spe);
}

void DrawRed()
{
	float m_amb[] = { 1.0f, 0.0f, 0.0f };
	float m_dif[] = { 0.0f, 0.0f, 0.0f };
	float m_spe[] = { 0.0f, 0.0f, 0.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, m_amb);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, m_dif);
	glMaterialfv(GL_FRONT, GL_SPECULAR, m_spe);
}

void DrawYellow()
{
	float m_amb[] = { 1.0f, 1.0f, 0.0f };
	float m_dif[] = { 0.0f, 0.0f, 0.0f };
	float m_spe[] = { 0.0f, 0.0f, 0.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, m_amb);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, m_dif);
	glMaterialfv(GL_FRONT, GL_SPECULAR, m_spe);
}