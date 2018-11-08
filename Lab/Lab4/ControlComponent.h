#pragma once

#include <iostream>
#include "Component.h"
#include <SFML/Graphics.hpp>
#include <SDL.h>


class ControlComponent : public Component
{
public:
	ControlComponent()  { id = 3; }
	
	enum direction {
		Idle,
		Left,
		Right,
		Up,
		Down
	};

	void setState(direction state) {
		std::cout << "Position System" << std::endl;
		m_currentState = state;
	};

	direction getState() {
		return m_currentState;
	}
	

private:

	direction m_currentState = direction::Idle;
};