#pragma once

#include <iostream>
#include "Entity.h"
#include "Component.h"

class HealthSystem
{
	std::vector<Entity*> entities;
public:
	void addEntity(Entity * e) {

		entities.push_back(e);
	}
	void update()
	{
		//std::cout << "HealthSysytem" << std::endl;
		/*Loop through Entites with
		HealthComponents and update 
		TBI*/
			
		for (auto entity : entities) {
			for (Component * component : entity->getComponents())
			{
				auto c = dynamic_cast<HealthComponent *>(component);
	
				if (component->id == 1)
				{
					int health = c->getHealth() - 1;
					//std::cout << component->id << " : " << health << std::endl;
				}
			}
		}
	}
};
