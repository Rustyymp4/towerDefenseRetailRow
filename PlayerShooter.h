#pragma once
#include "Entity.h"
#include "Shooter.h"
#include "Bullet.h"

class PlayerShooter : public Entity, Shooter
{
public:
	PlayerShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int shootingSpeed, int range, Bullet* bulletType);
	PlayerShooter(const PlayerShooter& copying);

	void Behavior();
	void PlayerShoot();
	State DetermineState();
};

