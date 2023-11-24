#include "EnemyShooter.h"

enum States {
	Idle,
	Move,
	Attack,
	Cooldown,
	Die,
	Disappear
};

EnemyShooter::EnemyShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed, int shootingSpeed, int range, Bullet* bulletType) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Enemy(speed), Shooter(shootingSpeed, range, bulletType) {

}

EnemyShooter::EnemyShooter(const EnemyShooter& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Enemy(copying.speed), Shooter(shootingSpeed, range, bulletType) {

}

States EnemyShooter::DetermineState()
{

	static const std::map<std::string, States> statesMap{
		{ "Idle", Idle},
		{ "Walk", Move},
		{ "Attack", Attack},
		{ "Cooldown", Cooldown},
		{ "Die", Die},
		{ "Disappear", Disappear}
	};

	auto itr = statesMap.find(state);
	if (itr != statesMap.end()) {
		return itr->second;
	}
}

void EnemyShooter::Behavior()
{
	switch (DetermineState())
	{
		case Idle: {

			break;
		}

		case Move: {
			//The boss moves forward, towards the player's defense
			break;
		}

		case Attack: {
			//The boss attacks one of the player's plants
			break;
		}

		case Cooldown: {
			//The boss cannot act for a little while
			break;
		}

		case Die: {
			//The boss plays a dying animation
			break;
		}

		case Disappear: {
			//The boss disappears for good
			break;
		}
	}

}