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
// seprates detail of implementation 
//	client creates instance of abstract factory 
//	client uses generic interfaces to create concrete istance
// Abstract classes allow you to provide default functionality for the subclasses.