#pragma once

#include <iostream>
#include "Entity.h"
#include "PositionComponent.h"

class PositionSystem
{
	std::vector<Entity *> entities;

public:
	void addEntity(Entity * e) {
		entities.push_back(e);
	}
	void update()
	{
		
		//set up a position vector and  

		for (auto entity : entities) {
			for (Component * component : entity->getComponents())
			{
				//std::cout << "Position System" << std::endl;
				if (component->id == 2)
				{
					auto c = dynamic_cast<PositionComponent *>(component);
					float posX = c->getPositionX();
					float posY = c->getPositionY();
					//std::cout << component->id << " : " << posX << std::endl;
					//std::cout << component->id << " : " << posY << std::endl;
				}
			}
		}
	}

};
