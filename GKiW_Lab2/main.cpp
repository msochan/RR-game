#include "stdafx.h"
#include "main.h"


void CreateEnemiesForStageOne()
{
	playerObject=std::make_unique<Player>(0.7f, 0.6f, 0, 0, 0, -180, 0.33f,
		std::make_shared<LoadOBJ>("res/f35_5.obj", texPlayer));
	
	////create big ships
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(3.7f, 1.5f, -5.2f, 0, -11, 90, 0.035f,
		std::make_shared<LoadOBJ>("res/bigship.obj", texBigShip)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(3.7f, 1.5f, 5.2f, 0, -11, -90, 0.035f,
		std::make_shared<LoadOBJ>("res/bigship.obj", texBigShip)));
							   
	////create turrets		   
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.63f, 0.4f, -7, 0, -5, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
	enemiesObjectVec.push_back(enemyObject = 
		std::make_shared<Enemy>(0.63f, 0.4f, 7, 0, -5, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.63f, 0.4f, 5.75f, 0, -6, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.63f, 0.4f, -5.75f, 0, -6, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.63f, 0.4f, 4, 0, -7, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.63f, 0.4f, -4, 0, -7, 90, 0.019f,
		std::make_shared<LoadOBJ>("res/z.obj", texTurret)));
							    
	//create ships			    
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, -2.5f, 0, -9, 0, 0.0018f,
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, -0.8f, 0, -9,  0, 0.0018f, 
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, 0.9f, 0, -9, 0, 0.0018f, 
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, 2.5f, 0, -9,  0, 0.0018f,
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, -1.7f, 0, -12.5f,  0, 0.0018f,
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, 0.1f, 0, -12.5f, 0, 0.0018f,
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
	enemiesObjectVec.push_back(enemyObject = std::make_shared<Enemy>(0.7f, 0.6f, 1.7f, 0, -12.5f,  0, 0.0018f,
		std::make_shared<LoadOBJ>("res/yacht.obj", shipTexture)));
}

void CreateEnvironmentForStageOne()
{
	//create rocks
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-20, 0, -20.1f, 30, 0.01f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-13, 0, -12,  0, 0.005f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-12.5f, 0, -8,  60, 0.003f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,13.5f, 0, -18.5f,  0, 0.008f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,14.6f, 0, -15.5f,  -45, 0.006f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,13.5f, 0, -12,  -50, 0.0052f,
		std::make_shared<LoadOBJ>("res/desert_rocks.obj", desertObjectTexture)));
							
	//create palms			
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-12, 0, -14,  0, 0.026f,
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-12.3f, 0, -14,  0, 0.02f,
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-12.0f, 0, -13.7f,  0, 0.01f,
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,-11.9f, 0, -8.3f, 0, 0.016f,
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,17, 0, -18, 70, 0.012f,
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
	gameObjectVec.push_back(terrainObject = std::make_shared<CollisionObject>(0,0,12.2f, 0, -12, 70, 0.021f, 
		std::make_shared<LoadOBJ>("res/desert_palm.obj", desertObjectTexture)));
											 
	//create terrain								 
	terrainBase = std::make_shared<CollisionObject>(0,0,0, 0, -6, 90, 0.021f,
		std::make_shared<LoadOBJ>("res/desert_18x20.obj", terrainTexture));
}

//render bullets
void RenderShots(std::vector <std::shared_ptr<CollisionObject>> &BulletArray, void (*function)(void))
{
	for (auto it = BulletArray.begin(); it != BulletArray.end(); it++){
		if ((*it) != nullptr){
			function();
			(*it)->Render();
			//(*it)->DrawCollisionBox();
		}
	}
}

//render objects from level
void RenderStageOne()
{
	RenderShots(playerBulletVec, DrawYellow);
	RenderShots(enemyBulletVec, DrawRed);

	playerObject->Render();
	//playerObject->DrawCollisionBox();
	terrainBase->Render();

	for (auto it = gameObjectVec.begin(); it != gameObjectVec.end(); it++)
		(*it)->Render();

	for (auto it = enemiesObjectVec.begin(); it != enemiesObjectVec.end(); it++)
		(*it)->Render();

	hud.GameOver(freeze);
	hud.Win(freeze_win);
	hud.HP(*playerObject);
}

//check if enemy got damage
void CheckEnemyHitCollision()
{
	auto it = playerBulletVec.begin();
	auto jt = enemiesObjectVec.begin();
	bool hitFlag = false;

	while (it != playerBulletVec.end()){
		while (jt != enemiesObjectVec.end()){
			if ((*jt)->CheckCollision(**it) == true) {
				PlaySound("res/explosion.wav", NULL, SND_FILENAME | SND_ASYNC);
				jt = enemiesObjectVec.erase(jt);
				hitFlag = true;
			}
			else
				++jt;
		}
		if (hitFlag == true) {
			it = playerBulletVec.erase(it);
			hitFlag = false;
		}
		else
			++it;
	}
}

//check if player got damage
void CheckPlayerHitCollision()
{
	auto it = enemyBulletVec.begin();
	while (it != enemyBulletVec.end())
	{
		if (playerObject->CheckCollision((**it)) == true) {
			PlaySound("res/smashing.wav", NULL, SND_FILENAME | SND_ASYNC);
			playerObject->SetHP(playerObject->GetHP() - 25);
			it = enemyBulletVec.erase(it);
		}
		else
			++it;
	}
}

//update state of all objects
void UpdateGame()
{
	if (keystate['a'] || keystate['A'])
		playerObject->Move(-1);
	
	if (keystate['d'] || keystate['D'])
		playerObject->Move(1);
	
	//player action
	playerObject->UpdateShot(playerBulletVec, -1);

	//enemies action
	enemyObject->Shot(enemiesObjectVec, enemyBulletVec);
	enemyObject->UpdateShot(enemyBulletVec, 1);
}

//check game condition
void CheckWinOrLoseConditions()
{
	if (enemiesObjectVec.empty())
	{
		PlaySound("res/youwin.wav", NULL, SND_FILENAME | SND_ASYNC);
		freeze_win = true;
	}

	if (playerObject->GetHP() == 0)
	{
		PlaySound("res/gameover2.wav", NULL, SND_FILENAME | SND_ASYNC);
		freeze = true;
	}
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1920, 1200);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("rr_game");

	glutDisplayFunc(OnRender);
	glutReshapeFunc(OnReshape);
	glutKeyboardFunc(OnKeyPress);
	glutKeyboardUpFunc(OnKeyUp);
	glutTimerFunc(17, OnTimer, 0);

	glEnable(GL_DEPTH_TEST);

	glDisable(GL_CULL_FACE);
	glCullFace(GL_BACK); 
	glFrontFace(GL_CCW); 

	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHT0);
	
	LoadTextures();
	CreateEnemiesForStageOne();
	CreateEnvironmentForStageOne();
	
	glutMainLoop();
	return 0;
}

void OnRender()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	GLfloat l0_pos[] = { 0.0f, 1.0f, 1.0f, 0.0f };
	GLfloat l0_amb[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat l0_dif[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat l0_spe[] = { 1.0f, 1.0f, 1.0f, 1.0f };

	glLightfv(GL_LIGHT0, GL_AMBIENT, l0_amb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, l0_dif);
	glLightfv(GL_LIGHT0, GL_SPECULAR, l0_spe);
	glLightfv(GL_LIGHT0, GL_POSITION, l0_pos);

	//settting up main camera
	gluLookAt(
		camera.position_x, camera.position_y, camera.position_z,
		camera.position_x + camera.dir_x, camera.position_y + camera.dir_y, camera.position_z + camera.dir_z,
		0.0f, 1.0f, 0.0f
	);

	RenderStageOne();
	
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

void OnReshape(int width, int height) 
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, width, height);
	gluPerspective(60.0f, (float)width / height, .01f, 100.0f);
}

void OnKeyPress(unsigned char key, int x, int y) 
{
	printf("KeyPress: %c\n", key);
	if (!keystate[key]) 
		OnKeyDown(key, x, y);
	keystate[key] = true;
}

void OnKeyDown(unsigned char key, int x, int y) 
{
	if (key == 27)  // ESC - exit
		glutLeaveMainLoop();
	
	if (key == 112 || key == 80)
		playerObject->Shot(playerObject->x, playerObject->y, playerObject->z, playerBulletVec);
}

void OnKeyUp(unsigned char key, int x, int y) 
{
	printf("KeyUp: %c\n", key);
	keystate[key] = false;
}

void OnTimer(int id) 
{
	if (!freeze && !freeze_win)
	{
		UpdateGame();

		CheckPlayerHitCollision();

		CheckEnemyHitCollision();

		CheckWinOrLoseConditions();

		glutTimerFunc(17, OnTimer, 0);
	}
}