#pragma once

#include <vector>
#include "GameWindow.h"

using namespace std;

class GameObject
{
protected:
	vector<GameObject*>	collisionList;
public:
	int positionX;
	int positionY;
	int sizeX;
	int sizeY;
	//SDL_Surface* surface;
	GameWindow* window;
	SDL_Rect r;


	GameObject(int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window);

	void InitDisplay();
	void EnterCollision(GameObject* other);
	void LeaveCollision();
	void SetPosition(int X, int Y);
};