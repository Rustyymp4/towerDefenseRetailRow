#pragma once

#include "Entity.h"
#include "Enemy.h"
#include "Shooter.h"


class EnemyShooter: public Entity, public Enemy, public Shooter
{
	EnemyShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window, int speed, int shootingSpeed, int range, string bulletType);

	EnemyShooter(const EnemyShooter& copying);

	void Behavior();
	void EnemyShoot();
};

