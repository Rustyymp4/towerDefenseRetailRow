#include "GridBox.h"

GridBox::GridBox(int positionX, int positionY, int sizeX, int sizeY, /*SDL_Surface* surface,*/ GameWindow* window): GameObject(positionX, positionY, sizeX, sizeY, /*surface,*/ window) {
	coordX = 0;
	coordY = 0;
	purchased = false;
}

GridBox::GridBox(const GridBox& copying, int coordX, int coordY) : GameObject(copying.positionX, copying.positionY, copying.sizeX, copying.sizeY, /*copying.surface,*/ copying.window) {
	this->coordX = coordX;
	this->coordY = coordY;
	purchased = false;
}

void GridBox::Lock() {
	purchased = false;
}

void GridBox::Unlock() {
	purchased = true;
}