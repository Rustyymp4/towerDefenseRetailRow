#include "PlayerWorker.h"

PlayerWorker::PlayerWorker(string productionType, int productionSpeed, string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window) :Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window) {
	this->productionType = productionType;
	this->productionSpeed = productionSpeed;
}

PlayerWorker::PlayerWorker(const PlayerWorker& copying) :Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window) {
	this->productionType = copying.productionType;
	this->productionSpeed = copying.productionSpeed;
}