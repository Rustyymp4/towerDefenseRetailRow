#pragma once

#include "Entity.h"
#include "Enemy.h"

class EnemyBoss: public Entity, Enemy
{
public:
	EnemyBoss(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed);
	EnemyBoss(const EnemyBoss& copying);

	void Behavior();
	void ThrowMinion();
};

