#pragma once

#include "Animation.h"

#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void handleInput(SDL_Event & event, SDL_Rect &viewRect);
	Animation getCurrentAnimation();
	void setCurrentAction(Animation a);

private:
	
	Animation * fsm;
	Animation m_current;

};