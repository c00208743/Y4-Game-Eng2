#pragma once

#include <iostream>
#include "Entity.h"
#include "Component.h"

class RenderSystem
{
	std::vector<Entity *> entities;

public:
	int index = 0;
	void addEntity(Entity * e) {
		entities.push_back(e);
	}
	void update()
	{

		//set up a position vector and  

		for (auto entity : entities) {
			index++;
			for (Component * component : entity->getComponents())
			{
				//std::cout << "Position System" << std::endl;
				if (component->id == 2)
				{
					auto c = dynamic_cast<PositionComponent *>(component);
					
					//entity id 
					std::cout << "Drawing component:"<< index<< " @ "<< c->getPositionX() << std::endl;
					std::cout << "Drawing component:" << index << " @ " << c->getPositionY() << std::endl;
				}

			}
			index = 0;
		}
	}

};
