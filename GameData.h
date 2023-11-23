#pragma once

#include <vector>
#include <string>

using namespace std;

class GridBox;

class GameData
{
public:
	int experience;
	int money;
	vector<vector<GridBox*>> rows;
	string boardState;
};