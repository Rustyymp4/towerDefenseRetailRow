enum States {
	Idle,
	Move,
	Attack,
	Cooldown,
	Die,
	Disappear
};

#include "EnemyWalker.h"

EnemyWalker::EnemyWalker(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Enemy(speed) {

}

EnemyWalker::EnemyWalker(const EnemyWalker& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Enemy(copying.speed) {

}

States EnemyWalker::DetermineState()
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

void EnemyWalker::Behavior()
{
	switch (DetermineState())
	{
		case Idle: {
			//checks if any plants are right in front of him, if so change state to attack, or elsechange state to Move
			break;
		}

		case Move: {
			//The enemy moves forward, towards the player's defense
			break;
		}

		case Attack: {
			//The enemy attacks one of the player's plants
			break;
		}

		case Cooldown: {
			//The enemy attacks one of the player's plants
			break;
		}

		case Die: {
			//The enemy plays a dying animation
			break;
		}

		case Disappear: {
			//The enemy plays a dying animation
			break;
		}

	}

}