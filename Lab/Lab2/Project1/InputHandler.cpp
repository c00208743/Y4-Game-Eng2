#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonS_ = new Jump();
	buttonW_ = new Fire();
	buttonA_ = new Crouch();
	buttonB_ = new Melee();
	buttonD_ = new Shield();
	macro = new Macro();

}

InputHandler::~InputHandler()
{

}

void InputHandler::handleInput(SDL_Event & event)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_s:
			buttonS_->execute();
			macro->add(buttonS_);
			break;
		case SDLK_w:
			buttonW_->execute();
			macro->add(buttonW_);
			break;
		case SDLK_a:
			buttonA_->execute();
			macro->add(buttonA_);
			break;
		case SDLK_b:
			buttonB_->execute();
			macro->add(buttonB_);
			break;
		case SDLK_d:
			buttonD_->execute();
			macro->add(buttonD_);
			break;
		case SDLK_z:
			macro->execute();
			break;


		}

	}

}