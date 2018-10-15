#pragma once

#include "Animation.h"

#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	enum Action
	{
		IDLE,
		JUMPING,
		CLIMBING
	};
	void handleInput(SDL_Event & event);
	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
	Animation * fsm;

};