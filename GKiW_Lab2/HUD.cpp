#include "stdafx.h"
#include "HUD.h"


void HUD::HP(Player &player)
{
	glDisable(GL_LIGHTING);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);

	int sx = glutGet(GLUT_WINDOW_WIDTH);
	int sy = glutGet(GLUT_WINDOW_HEIGHT);

	glMatrixMode(GL_PROJECTION);

	glPushMatrix();
	glLoadIdentity();
	glOrtho(0.0f, sx, 0.0f, sy, -100.0f, 100.0f);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, 0.0f);

	glColor4d(0.0f, 0.27f, 0.37f, 0.0f);
	glBegin(GL_QUADS);
	glTexCoord2d(1, 1); glVertex2f(350, 60);
	glTexCoord2d(1, 0); glVertex2f(350, 0);

	glColor4d(0.0f, 0.0f, 0.0f, 1.0f);
	glTexCoord2d(0, 0); glVertex2f(0, 0);
	glTexCoord2d(0, 1); glVertex2f(0, 60);
	glEnd();

	glLoadIdentity();
	glTranslatef(5.0f, 5.0f, 0.0f);
	glScalef(0.5f, 0.5f, 0.5f);
	glColor4f(1.0f, 1.0f, 0.0f, 1.0f);

	std::string message3 = "HP:";
	message3 += std::to_string(int(player.GetHP()));
	for (int i = 0; i < message3.length(); i++)
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, message3[i]);
	
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glEnable(GL_LIGHTING);
	glDisable(GL_BLEND);
	glEnable(GL_DEPTH_TEST);
}

void HUD::GameOver(bool freeze)
{
	glDisable(GL_LIGHTING);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);

	int sx = glutGet(GLUT_WINDOW_WIDTH);
	int sy = glutGet(GLUT_WINDOW_HEIGHT);

	glMatrixMode(GL_PROJECTION);

	glPushMatrix();
	glLoadIdentity();
	glOrtho(0.0f, sx, 0.0f, sy, -100.0f, 100.0f);

	glMatrixMode(GL_MODELVIEW);

	if (freeze) 
	{
		glLoadIdentity();
		glTranslatef(sx / 2.0f - 315.0f, sy / 2.0f + 10.0f, 0.0f);
		glScalef(0.8f, 0.8f, 0.8f);
		glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

		std::string message4 = "GAME OVER";
		for (int i = 0; i < message4.length(); i++) 
			glutStrokeCharacter(GLUT_STROKE_ROMAN, message4[i]);
	}
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glEnable(GL_LIGHTING);
	glDisable(GL_BLEND);
	glEnable(GL_DEPTH_TEST);
}

void HUD::Win(bool freeze_win)
{
	glDisable(GL_LIGHTING);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);

	int sx = glutGet(GLUT_WINDOW_WIDTH);
	int sy = glutGet(GLUT_WINDOW_HEIGHT);

	glMatrixMode(GL_PROJECTION);

	glPushMatrix();
	glLoadIdentity();
	glOrtho(0.0f, sx, 0.0f, sy, -100.0f, 100.0f);

	glMatrixMode(GL_MODELVIEW);

	if (freeze_win) 
	{
		glLoadIdentity();
		glTranslatef(sx / 2.0f - 280.0f, sy / 2.0f + 10.0f, 0.0f);
		glScalef(0.8f, 0.8f, 0.8f);
		glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

		std::string message5 = "YOU WIN";
		for (int i = 0; i < message5.length(); i++) 
			glutStrokeCharacter(GLUT_STROKE_ROMAN, message5[i]);
	}
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glEnable(GL_LIGHTING);
	glDisable(GL_BLEND);
	glEnable(GL_DEPTH_TEST);
}