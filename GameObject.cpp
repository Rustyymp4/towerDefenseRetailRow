#include "GameObject.h"
#include "GameWindow.h"
#include <SDL.h>

GameObject::GameObject(int positionX, int positionY, int sizeX, int sizeY, SDL_Surface* surface, GameWindow* window)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->sizeX = sizeX;
	this->sizeY = sizeY;
	this->surface = surface;
	this->window = window;
	this->r = { positionX, positionY, sizeX, sizeY };
}

void GameObject::InitDisplay()
{
	SDL_Texture* texture = NULL;
	texture = SDL_CreateTextureFromSurface(window->renderer, surface);
	SDL_FreeSurface(surface);
	SDL_RenderCopy(window->renderer, texture, NULL, &r);
	SDL_DestroyTexture(texture);
}

void GameObject::EnterCollision(GameObject* other)
{
	SDL_Rect* result = NULL;
	if (SDL_IntersectRect(&r, &other->r, result)){
		collisionList.push_back(other);
	}
}

void GameObject:: LeaveCollision()
{
	SDL_Rect* result = NULL;
	size_t tabLenghth = collisionList.size();
	for (size_t i = 0; i < tabLenghth; i++) {
		if (!SDL_IntersectRect(&r, &collisionList[i]->r, result)) {
			collisionList.erase(collisionList.begin() + i);
		}
	}
}

void GameObject::SetPosition(int X, int Y) {
	positionX = X;
	positionY = Y;
}