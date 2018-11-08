#pragma once

#include <iostream>
#include "Entity.h"
#include "ControlComponent.h"

class ControlSystem
{
	

public:

	std::vector<Entity *> entities;
	float posX;
	float posY;

	ControlComponent* controlComp;
	PositionComponent* posComp;

	void addEntity(Entity * e) {
		entities.push_back(e);
	}

	void input(SDL_Event &e) {

		for (auto entity : entities) {
			for (Component * component : entity->getComponents())
			{
				if (component->id == 3) {
					controlComp = dynamic_cast<ControlComponent*>(component);
				}

			}
			switch (e.type)
			{
			case SDL_KEYDOWN:
				switch (e.key.keysym.sym)
				{
				case SDLK_UP:
					controlComp->setState(controlComp->Up);
					break;
				case SDLK_DOWN:
					controlComp->setState(controlComp->Down);
					break;
				case SDLK_LEFT:
					controlComp->setState(controlComp->Left);
					break;
				case SDLK_RIGHT:
					controlComp->setState(controlComp->Right);
					break;
				default:
					controlComp->setState(controlComp->Idle);
					break;

				}

				update();

			}
		}
	}

	void update()
	{
		int index = 0;
		for (auto entity : entities) 
		{
			for (Component * component : entity->getComponents())
			{
				if (component->id == 2) {

					posComp = dynamic_cast<PositionComponent*>(component);

				}
				//std::cout << "Position System" << std::endl;
				if (component->id == 3)
				{
					controlComp = dynamic_cast<ControlComponent *>(component);
				
				}
			}
			index++;
			posX = posComp->getPositionX();
			posY = posComp->getPositionY();


			if (controlComp->getState() == controlComp->Up) {
				posY -= 1;
			}

			if (controlComp->getState() == controlComp->Down) {
				posY += 1;
			}

			if (controlComp->getState() == controlComp->Right) {
				posX += 1;
			}

			if (controlComp->getState() == controlComp->Left) {
				posX -= 1;
			}
			posComp->setPositionX(posX);
			posComp->setPositionY(posY);
			
			std::cout << "PosX: " << posComp->getPositionX() << " PosY: " << posComp->getPositionY() << std::endl;
		}
		
	}
	
	
	

};
