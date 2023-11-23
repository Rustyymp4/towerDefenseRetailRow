#include "GameData.h"

GameData::GameData(GameWindow* window) {

	this->window = window;

	money = 0;
	experience = 0;

	prototypeGridBox = new GridBox(0, 0, 0, 0, window);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 7; j++) {
			rows[i][j] = new GridBox(*prototypeGridBox, j, i);
		}
	}

	prototypesBullet["PeashooterBullet"] = new Bullet(10, "PeashooterBullet", 10, 5, true, 0, 0, 10, 10, window);
	prototypesBullet["FirezombieBullet"] = new Bullet(5, "FirezombieBullet", 10, 6, true, 0, 0, 10, 10, window);

	prototypesPlayerShooter["Peashooter"] = new PlayerShooter("Peashooter", 10, 5, true, 0, 0, 20, 20, window, 10, 7, prototypesBullet["PeashooterBullet"]);
	prototypesPlayerWorker["Sunflower"] = new PlayerWorker("experience", 10, "Sunflower", 10, 5, true, 0, 0, 20, 20, window);
	prototypesPlayerWorker["Walnut"] = new PlayerWorker("money", 15, "Walnut", 50, 5, true, 0, 0, 20, 20, window);

	prototypesEnemyBoss["Zomboss"] = new EnemyBoss("Zomboss", 50, 5, true, 0, 0, 20, 20, window, 6);
	prototypesEnemyWalker["Zombie"] = new EnemyWalker("Zombie", 10, 5, true, 0, 0, 20, 20, window, 6);
	prototypesEnemyShooter["Firezombie"] = new EnemyShooter("Firezombie", 8, 5, true, 0, 0, 20, 20, window, 8, 5, 4, prototypesBullet["FirezombieBullet"]);

}