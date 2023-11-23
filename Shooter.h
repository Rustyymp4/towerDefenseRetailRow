#pragma once

#include <string>

using namespace std;

class Shooter
{
public:
	int shootingSpeed;
	int range;
	string bulletType;

	Shooter(int shootingSpeed, int range, string bulletType);
};

