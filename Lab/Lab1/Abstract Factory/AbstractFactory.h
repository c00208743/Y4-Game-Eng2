#pragma once
#include <iostream>
class Charachter {
public:
	Charachter() {}
	virtual ~Charachter() {}
	virtual void draw() = 0;

};

class Player : public Charachter {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};

class Boss : public Charachter {
public:
	void draw() {
		std::cout << "Draw Boss" << std::endl;
	}
};
// concrete instances
class Factory {
public:
	virtual Charachter* CreatePlayer() = 0;
	virtual Charachter* CreateOpponents() = 0;
};

class CharachterFactory : public Factory {
public:
	Charachter * CreatePlayer() {
		return new Player;
	}
	Charachter * CreateOpponents() {
		return new Boss;
	}
};

//create concrete classes implementing the same interface