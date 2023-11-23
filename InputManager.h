#pragma once

#include "GameWindow.h"
#include "GameData.h"

class InputManager
{
	SDL_Event events;
	GameData* currentGameData;

	InputManager();

	void EventCheck();
	void Build(GridBox*, string);
	void Destroy(GridBox*);
};

