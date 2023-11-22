#include "Bullet.h"

#include "Entity.h"

Bullet::Bullet(int bulletSpeed, float positionX, float positionY) : Entity()
{

	this->positionY = positionY;
	this->positionX = positionX;
	this->bulletSpeed = bulletSpeed;

	
}
