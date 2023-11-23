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

	prototypesBullet["PeaShooterBullet"] = new Bullet(10, "PeashooterBullet", 10, 5, true, 0, 0, 10, 10, window);
	prototypesPlayerShooter["PeaShooter"] = new PlayerShooter("PeaShooter", 10, 5, true, 0, 0, 20, 20, window, 10, 7, prototypesBullet["PeaShooterBullet"]);

}