#pragma once
#include <iostream>
#include <SDL.h>

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s);

	void idle(SDL_Rect &viewRect);

	void jumping(SDL_Rect &viewRect);

	void climbing(SDL_Rect &viewRect);

};