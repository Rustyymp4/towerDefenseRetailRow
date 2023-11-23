#pragma once

#include <vector>
#include <string>
#include <map>

#include "Entity.h"

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
	map<string, GameObject*> prototypeMap;
	GridBox* prototypeGridBox;

	GameData(GameWindow* window);
};