#include "Entity.h"

Entity::Entity(string name, int hp, int power, bool belongsToPlayer) {

	this->name = name;
	this->hp = hp;
	this->power = power;
	this->belongsToPlayer = belongsToPlayer;
}

void Entity::TakeDamage(int amount) {
	hp -= amount;
}