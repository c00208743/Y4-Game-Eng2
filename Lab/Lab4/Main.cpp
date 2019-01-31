
//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include "HealthComponent.h"
#include "Entity.h"
#include "HealthSystem.h"
#include "PositionSystem.h"
#include "PositionComponent.h"
#include "AIComponent.h"
#include "AISystem.h"
#include "ControlComponent.h"
#include "ControlSystem.h"
#include "RenderSystem.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
	int quit = 0;
	SDL_Event e;
	//The window we'll be rendering to
	SDL_Window* window = NULL;

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//My stuff
	Entity player, alien, cat, dog;
	HealthComponent hc;
	PositionComponent pc;
	AIComponent aic;
	ControlComponent cc;

	player.addComponent(&hc);
	player.addComponent(&pc);
	player.addComponent(&aic);
	//player.addComponent(&cc);

	alien.addComponent(&hc);
	alien.addComponent(&pc);
	alien.addComponent(&aic);
	//alien.addComponent(&cc);

	cat.addComponent(&hc);
	cat.addComponent(&pc);
	cat.addComponent(&aic);

	dog.addComponent(&hc);
	dog.addComponent(&pc);
	dog.addComponent(&aic);
	dog.addComponent(&cc);

	HealthSystem hs;
	PositionSystem ps;
	AISystem ais;
	ControlSystem cs;
	RenderSystem rs;

	hs.addEntity(&player);
	ps.addEntity(&player);
	//cs.addEntity(&player);
	rs.addEntity(&player);
	ais.addEntity(&player);

	hs.addEntity(&alien);
	ps.addEntity(&alien);
	rs.addEntity(&alien);
	ais.addEntity(&alien);
	//cs.addEntity(&alien);

	hs.addEntity(&cat);
	ps.addEntity(&cat);
	rs.addEntity(&cat);
	ais.addEntity(&cat);

	hs.addEntity(&dog);
	ps.addEntity(&dog);
	rs.addEntity(&dog);
	//ais.addEntity(&dog);
	cs.addEntity(&dog);



	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			//Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(window);

			//Wait two seconds
			SDL_Delay(2000);
		}
	}

	while (true)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			cs.input(e);

			//User requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}

		//hs.update();
		//ps.update();
		//ais.update();
	
		//rs.update();

	}
	return 0;

	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}
