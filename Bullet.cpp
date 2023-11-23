#include "Bullet.h"

#include "Entity.h"

Bullet::Bullet(int bulletSpeed, string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window)
{

	this->bulletSpeed = bulletSpeed;
	this->positionY = positionY;
	this->positionX = positionX;
	this->name = name;
	this->hp = hp;
	this->power = power;
	this->belongsToPlayer = belongsToPlayer;
	direction = 0;

	if (belongsToPlayer == 1) { direction = 1; }
	else { direction = -1; }
}


Bullet::Bullet(const Bullet& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window) {
	this->bulletSpeed = copying.bulletSpeed;
	this->positionY = copying.positionY;
	this->positionX = copying.positionX;
	this->name = copying.name;
	this->hp = copying.hp;
	this->power = copying.power;
	this->belongsToPlayer = copying.belongsToPlayer;
	this->direction = copying.direction;
}

void Bullet::MoveBullet()
{

	positionX += bulletSpeed * direction;

}

void Bullet::Hit()
{

}
