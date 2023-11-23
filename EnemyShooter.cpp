#include "EnemyShooter.h"

EnemyShooter::EnemyShooter(string name, int hp, int power, bool belongsToPlayer, int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window, int speed, int shootingSpeed, int range, string bulletType) : Entity(name, hp, power, belongsToPlayer, positionX, positionY, sizeX, sizeY, surface, window), Enemy(speed), Shooter(shootingSpeed, range, bulletType) {

}

EnemyShooter::EnemyShooter(const EnemyShooter& copying) : Entity(copying.name, copying.hp, copying.power, copying.belongsToPlayer, copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, copying.surface, copying.window), Enemy(copying.speed), Shooter(shootingSpeed, range, bulletType) {

}