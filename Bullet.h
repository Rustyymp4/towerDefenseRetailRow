#pragma once
#include "Entity.h"

class Bullet:Entity
{

public:
	

	float positionX;
	float positionY;
	int direction;
	int bulletSpeed;

	Bullet(int bulletSpeed, float positionX, float positionY);

	void MoveBullet();
	void Hit();

};

