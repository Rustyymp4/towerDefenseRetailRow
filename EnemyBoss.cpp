#include "EnemyBoss.h"

enum States {
	Idle,
	Move,
	Throw,
	Attack,
	Cooldown,
	Die,
	Disappear
};

EnemyBoss::EnemyBoss(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Enemy(speed) {

}

EnemyBoss::EnemyBoss(const EnemyBoss& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Enemy(copying.speed) {

}

States EnemyBoss::DetermineState()
{

	static const std::map<std::string, States> statesMap{
		{ "Idle", Idle},
		{ "Walk", Move},
		{ "Throw", Throw},
		{ "Attack", Attack},
		{ "Cooldown", Cooldown},
		{ "Die", Die}
	};

	auto itr = statesMap.find(state);
	if (itr != statesMap.end()) {
		return itr->second;
	}
}

void EnemyBoss::Behavior()
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

		case Throw: {
			//The boss throws his minion towards the player, this will create another Enemy Entity
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