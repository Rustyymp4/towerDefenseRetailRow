#include "EnemyBoss.h"

EnemyBoss::EnemyBoss(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window, int speed) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, /*surface,*/ window), Enemy(speed) {

}

EnemyBoss::EnemyBoss(const EnemyBoss& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window), Enemy(copying.speed) {

}