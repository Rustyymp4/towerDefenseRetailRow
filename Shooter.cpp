#include "Shooter.h"

Shooter::Shooter(int shootingSpeed, int range, Bullet* bulletType)
{
	this->shootingSpeed = shootingSpeed;
	this->range = range;
	this->bulletType = bulletType;
}