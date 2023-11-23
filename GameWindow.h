#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <string>


using namespace std;

class GameObject;

class GameWindow
{
public:
	SDL_Window* window;
	SDL_Renderer* renderer;
	int sizeX;
	int sizeY;
	vector<GameObject*> objectList;
	map<string, SDL_Texture*> textureList;

	GameWindow();

	void Display();
	void LoadTextures();
};

