#include "PlayerShooter.h"

PlayerShooter::PlayerShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int shootingSpeed, int range, string bulletType) :Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Shooter(shootingSpeed, range, bulletType) {

}

PlayerShooter::PlayerShooter(const PlayerShooter& copying) :Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Shooter(copying.shootingSpeed, copying.range, copying.bulletType) {

}

