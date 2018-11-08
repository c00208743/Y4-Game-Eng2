#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	current = new Idle(); 
}

void Animation::idle(SDL_Rect &viewRect)
{
	 current->idle(this, viewRect); 
}

void Animation::jumping(SDL_Rect &viewRect)
{
	 current->jumping(this, viewRect);
}

void Animation::climbing(SDL_Rect &viewRect)
{
	 current->climbing(this, viewRect);
}

void Animation::setCurrent(State* s)
{
	current = s;
}