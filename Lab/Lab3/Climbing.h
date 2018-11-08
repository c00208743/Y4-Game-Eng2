#pragma once

#include "SDL.h"
#include "Idle.h"
#include "State.h"

class Climbing : public State
{
public:
	Climbing() {  };
	~Climbing() {  };
	void idle(Animation* a, SDL_Rect &viewRect) {
		std::cout << "Going from Climbing to Idling" << std::endl;
		a->setCurrent(new Idle());
		viewRect.x = 0;
		delete this;
	}


};