#include "GridBox.h"

GridBox::GridBox(int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window): GameObject(positionX, positionY, sizeX, sizeY, surface, window) {
	coordX = 0;
	coordY = 0;
	purchased = false;
}


void GridBox::Lock() {
	purchased = false;
}

void GridBox::Unlock() {
	purchased = true;
}