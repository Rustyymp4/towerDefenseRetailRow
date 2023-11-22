#pragma once
#include <string>

#include "GameObject.h"



class Entity
{
	string name;
	int hp;
	int power;
	bool belongsToPlayer;
	string state;

	Entity(string name, int hp, int power, bool belongToPlayer);
	void TakeDamage(int amount);
};