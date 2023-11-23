#pragma once
#include <string>

#include "Entity.h"

using namespace std;

class Bullet:Entity
{

public:
	

	int positionX;
	int positionY;
	int direction;
	int bulletSpeed;

	Bullet(int bulletSpeed, string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window);
	
	void MoveBullet();
	void Hit();

};

