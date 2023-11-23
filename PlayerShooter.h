#pragma once
#include "Entity.h"
#include "Shooter.h"

class PlayerShooter : public Entity, Shooter
{
	PlayerShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int shootingSpeed, int range, string bulletType);
	PlayerShooter(const PlayerShooter& copying);

	void Behavior();
	void PlayerShoot();
};

