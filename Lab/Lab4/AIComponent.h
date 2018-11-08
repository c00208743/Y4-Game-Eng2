#pragma once

#include <iostream>
#include "Component.h"
#include <SFML/Graphics.hpp>
  


class AIComponent : public Component
{
public:
	AIComponent() : x(100), y(100) { id = 4; }
	float getPositionX() { return x; }
	float getPositionY() { return y; }
	
	void setPositionX(int x) { this->x = x; }
	void setPositionY(int y) { this->y = y; }


private:
	//make random
	float x;
	float y; 

};