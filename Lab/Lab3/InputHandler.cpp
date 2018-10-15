#include "InputHandler.h"
#include "Animation.h"

InputHandler::InputHandler()
{
	fsm = new Animation();
	m_current = IDLE;

}

InputHandler::~InputHandler()
{

}

void InputHandler::setCurrent(Action a) {
	m_current = a;
}

InputHandler::Action InputHandler::getCurrent() {
	return m_current;
}

void InputHandler::handleInput(SDL_Event & event)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_y:
			fsm->jumping();
			if (getCurrent() == IDLE)
				setCurrent(JUMPING);
			break;
		case SDLK_x:
			fsm->climbing();
			if (getCurrent() == IDLE)
				setCurrent(CLIMBING);
			break;
		case SDLK_c:
			fsm->idle();
			setCurrent(IDLE);
			break;

		}

	}

}