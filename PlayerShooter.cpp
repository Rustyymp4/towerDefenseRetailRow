#include "PlayerShooter.h"

enum States {
	Idle,
	Attack,
	Cooldown,
	Die
};

PlayerShooter::PlayerShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int shootingSpeed, int range, Bullet* bulletType) :Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Shooter(shootingSpeed, range, bulletType) {

}

PlayerShooter::PlayerShooter(const PlayerShooter& copying) :Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Shooter(copying.shootingSpeed, copying.range, copying.bulletType) {

}

States PlayerShooter::DetermineState()
{

	static const std::map<std::string, States> statesMap{
		{ "Idle", Idle},
		{ "Attack", Attack},
		{ "Cooldown", Cooldown},
		{ "Die", Die}
	};

	auto itr = statesMap.find(state);
	if (itr != statesMap.end()) {
		return itr->second;
	}
}

void PlayerShooter::Behavior()
{
	switch (DetermineState())
	{
		case Idle: {
			//Checks if any enemies are in range. if so, changes the state to "attack"
			break;
		}

		case Attack: {
			//The player's plant attacks the first zombie in front of him with projectiles from afar, this creates bullets and sends the plant into cooldown
			break;
		}

		case Cooldown: {
			//The player's plant waits a while before being able to act again, then goes into Idle
			break;
		}

		case Die: {
			//The plant dies and disappears instantly
			break;
		}
	}

}