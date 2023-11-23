#pragma once
#include <string>

#include "Entity.h"

using namespace std;

class Bullet: public Entity
{
public:
	int positionX;
	int positionY;
	int direction;
	int bulletSpeed;

	Bullet(int bulletSpeed, string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window);
	Bullet(const Bullet& copying);
	
	void MoveBullet();
	void Hit();

};

