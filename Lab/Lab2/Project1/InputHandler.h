#pragma once

#include "Command.h"
#include "Fire.h"
#include "Jump.h"
#include "Crouch.h"
#include "Melee.h"
#include "Macro.h"
#include "Shield.h"

#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void handleInput(SDL_Event & event);

private:
	Command * buttonS_;
	Command * buttonW_;
	Command * buttonA_;
	Command * buttonB_;
	Command * buttonD_;
	Macro * macro;

};