#pragma once

#include "Entity.h"
#include "Enemy.h"

class EnemyWalker : public Entity, Enemy
{
	EnemyWalker(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window, int speed);

	EnemyWalker(const EnemyWalker &copying);

	void Behavior();
	void Strike();
};

