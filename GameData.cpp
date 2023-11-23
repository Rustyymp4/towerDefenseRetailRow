#include "GameData.h"
#include "GridBox.h"

GameData::GameData(GameWindow* window) {

	this->window = window;

	prototypeGridBox = new GridBox(0, 0, 0, 0, window);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 7; j++) {
			rows[i][j] = new GridBox(*prototypeGridBox, j, i);
		}
	}
}