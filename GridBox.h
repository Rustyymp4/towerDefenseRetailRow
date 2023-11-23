 #pragma once

#include <vector>

#include "GameObject.h"

using namespace std;

class GridBox : public GameObject
{
public:
	int coordX;
	int coordY;
	bool purchased;

	GridBox(int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window);
	GridBox(const GridBox& copying, int coordX, int coordY);

	void Lock();
	void Unlock();
};

