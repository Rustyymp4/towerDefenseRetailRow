#pragma once
#include <string>

#include "GameObject.h"

class Entity : public GameObject
{
public:
	string name;
	int hp;
	int power;
	bool belongsToPlayer;
	string state;

	Entity(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window);

	void TakeDamage(int amount);
};