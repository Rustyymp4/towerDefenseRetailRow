#include "Entity.h"

Entity::Entity(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window) : GameObject(positionX, positionY, sizeX, sizeY, /*surface,*/ window)
{
	this->name = name;
	this->hp = hp;
	this->power = power;
	this->belongsToPlayer = belongsToPlayer;
	stateClock = 0;
}

void Entity::TakeDamage(int amount) {
	hp -= amount;
	if (hp <= 0) {
		state = "Die";
	}
}