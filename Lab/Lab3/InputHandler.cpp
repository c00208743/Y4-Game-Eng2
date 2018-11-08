#include "InputHandler.h"
#include "Animation.h"

InputHandler::InputHandler()
{
	fsm = new Animation();
	//m_current = IDLE;

}

InputHandler::~InputHandler()
{

}
Animation InputHandler::getCurrentAnimation()
{
	return m_current;
}
void InputHandler::setCurrentAction(Animation a)
{
	m_current = a;
}

void InputHandler::handleInput(SDL_Event & event, SDL_Rect &viewRect)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_y:
			fsm->jumping(viewRect);
			
			break;
		case SDLK_x:
			fsm->climbing(viewRect);
			break;
		case SDLK_c:
			fsm->idle(viewRect);
			break;

		}

	}

}