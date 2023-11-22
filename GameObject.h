#pragma once

#include <vector>

class SDL_Texture;

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
	SDL_Texture* texture;


	GameObject();

	void Display();
};

