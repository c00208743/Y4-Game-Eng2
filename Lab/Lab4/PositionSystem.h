#pragma once

#include <iostream>
#include "Entity.h"
#include "PositionComponent.h"

class PositionSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity * e) {}
	void update()
	{
		std::cout << "PositionSystem" << std::endl;
		//set up a position vector and  
	}

};