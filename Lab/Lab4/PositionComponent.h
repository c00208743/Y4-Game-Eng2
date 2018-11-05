#pragma once

#include <iostream>
#include "Component.h"
#include <SFML/Graphics.hpp>


class PositionComponent : public Component
{
public:
	PositionComponent() : position(100, 100) {}
	sf::Vector2f getPosition() { return position; }
	void setPosition(sf::Vector2f position) { this->position = position; }


private:
	/*int positionX;
	int positionY;*/
	sf::Vector2f position;
};