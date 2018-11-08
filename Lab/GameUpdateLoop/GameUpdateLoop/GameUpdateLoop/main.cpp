#include <iostream>
#include <Windows.h>
#include "GameTime.h"

using namespace std;

const float TRIGGER = 0.2f;

int main(void)
{
	float last = 0.0f;
	float current = 0.0f;
	GameTime* gameTime = GameTime::getInstance();

	last = gameTime->running();

	//Main Game Loop
	while(true)
	{
		current = gameTime->running();
		if((current - last) > TRIGGER)
		{
			cout << "Wendy is Talking!!!!";
			last = current;
		}
		Sleep(500);//main process sleeps
		cout << ".";//alive indicator
	}
}