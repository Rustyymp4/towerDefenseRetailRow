#pragma once

#include <vector>

#include "GameObject.h"

using namespace std;

class GridBox : GameObject
{
	int coordX;
	int coordY;
	bool purchased;

	GridBox(int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window);

	void Lock();
	void Unlock();
};

