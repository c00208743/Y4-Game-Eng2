#pragma once

#include <iostream>
#include "Component.h"
#include <SFML/Graphics.hpp>


class PositionComponent : public Component
{
public:
	PositionComponent() : x(300), y(200) { id = 2; }
	float getPositionX() { return x; }
	float getPositionY() { return y; }
	
	void setPositionX(int x) { this->x = x; }
	void setPositionY(int y) { this->y = y; }


private:
	float x;
	float y;

};