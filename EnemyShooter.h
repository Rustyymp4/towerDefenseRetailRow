#pragma once

#include "Entity.h"
#include "Enemy.h"
#include "Shooter.h"
#include "Bullet.h"


class EnemyShooter: public Entity, public Enemy, public Shooter
{
public:
	EnemyShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed, int shootingSpeed, int range, Bullet* bulletType);

	EnemyShooter(const EnemyShooter& copying);

	void Behavior();
	void EnemyShoot();
};

