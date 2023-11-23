#pragma once

#include <vector>
#include <string>
#include <map>

#include "GridBox.h"
#include "Entity.h"
#include "PlayerWorker.h"
#include "PlayerShooter.h"
#include "EnemyBoss.h"
#include "EnemyWalker.h"
#include "EnemyShooter.h"
#include "Bullet.h"

using namespace std;

class GridBox;

class GameData
{
public:
	int experience;
	int money;
	GameWindow* window;
	vector<vector<GridBox*>> rows;
	string boardState;
	GridBox* prototypeGridBox;
	map<string, PlayerWorker*> prototypesPlayerWorker;
	map<string, PlayerShooter*> prototypesPlayerShooter;
	map<string, EnemyBoss*> prototypesEnemyBoss;
	map<string, EnemyWalker*> prototypesEnemyWalker;
	map<string, EnemyShooter*> prototypesEnemyShooter;
	map<string, Bullet*> prototypesBullet;

	GameData(GameWindow* window);
};