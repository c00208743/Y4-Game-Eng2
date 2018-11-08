#pragma once

#include <iostream>
#include "Idle.h"
#include "State.h"

class Jumping : public State
{
public:
	Jumping() { };
	~Jumping() {  };
	void idle(Animation* a, SDL_Rect &viewRect)
	{
		std::cout << "Going from Jumping to Idling" << std::endl;
		a->setCurrent(new Idle());
		viewRect.x = 0;
		delete this;
	}

};