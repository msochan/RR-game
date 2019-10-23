#include "LoadOBJ.h"
#include "Camera.h"
#include "Player.h"
#include "Bullet.h"
#include "Bitmap.h"
#include "HUD.h"
#include "Utility.h"
#include "Object.h"
#include "Enemy.h"
#include "CollisionObject.h"


bool keystate[256];//array stores state of keys
bool freeze = false;
bool freeze_win = false;
std::vector <std::shared_ptr<CollisionObject>> enemiesObjectVec;
std::vector <std::shared_ptr<CollisionObject>> gameObjectVec;
std::vector <std::shared_ptr<CollisionObject>> enemyBulletVec;
std::vector <std::shared_ptr<CollisionObject>> playerBulletVec;
std::shared_ptr<CollisionObject> terrainBase;
std::shared_ptr<CollisionObject> terrainObject;
std::shared_ptr<Enemy> enemyObject;
std::unique_ptr<Player> playerObject;
Camera camera;
HUD hud;

//functions to handling events of GLUT
void OnRender();

void OnReshape(int, int);

void OnKeyPress(unsigned char, int, int);

void OnKeyDown(unsigned char, int, int);

void OnKeyUp(unsigned char, int, int);

void OnTimer(int);