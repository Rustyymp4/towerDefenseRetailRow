#include "GameWindow.h"



GameWindow::GameWindow() {

	sizeX = 800;
	sizeY = 800;

	window = SDL_CreateWindow("Tower Defense", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sizeX, sizeY, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_Delay(2000);

}

void GameWindow::Display() {
	SDL_RenderPresent(renderer);
}


void GameWindow::LoadTextures() {

		

}