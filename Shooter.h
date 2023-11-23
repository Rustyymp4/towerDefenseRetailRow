#pragma once

#include <string>
#include "Bullet.h"

using namespace std;

class Shooter
{
public:
	int shootingSpeed;
	int range;
	Bullet* bulletType;

	Shooter(int shootingSpeed, int range, Bullet* bulletType);
};

