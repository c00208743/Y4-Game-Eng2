#include "AbstractFactory.h"
#include <iostream>
#include <vector>

int main() {
	Factory* factory = new CharachterFactory;
	std::vector<Charachter*> charachters;
	charachters.push_back(factory->CreatePlayer());
	charachters.push_back(factory->CreateOpponents());

	for (int i = 0; i < charachters.size(); i++) {

		charachters[i]->draw();

	}

	std::cin.get();
}