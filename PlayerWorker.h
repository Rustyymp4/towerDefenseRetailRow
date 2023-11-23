#pragma once
#include "Entity.h"

using namespace std;

class PlayerWorker : public Entity
{
	string productionType;
	int productionSpeed;

	PlayerWorker(string productionType, int productionSpeed, string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window);
	PlayerWorker(const PlayerWorker& copying);

	void Produce();
};