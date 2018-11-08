#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"


void Idle::jumping(Animation* a, SDL_Rect &viewRect)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Jumping());
	viewRect.x = 85;
	delete this;
}

void Idle::climbing(Animation* a, SDL_Rect &viewRect)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Climbing());
	viewRect.x = 170;
	delete this;
}

