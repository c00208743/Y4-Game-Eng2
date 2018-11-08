#pragma once

#include <iostream>
#include "Entity.h"
#include "AIComponent.h"

class AISystem
{
	std::vector<Entity *> entities;

public:

	float posX = 0;
	float posY = 0;
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
				//std::cout << "AI  System" << std::endl;
				if (component->id == 4)
				{
					auto c = dynamic_cast<AIComponent *>(component);
					 posX = c->getPositionX();
					 posY = c->getPositionY();

					 posX = rand() % 100 + 1;
					 posY = rand() % 100 + 1;
						 
					 c->setPositionY(posY);
					 c->setPositionY(posY);

					 //std out entity + pos  
					 std::cout << index << " : " << "PosX: " << c->getPositionX() << std::endl;
					 std::cout << index << " : " << "PosY: " << c->getPositionY() << std::endl;
				}
			}
		}
		index = 0;
	}

};
