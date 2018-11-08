#pragma once
#include <iostream>
using namespace std;

class Character
{
public:
	Character() {}
	void Print() {
		cout << "Printing character" << endl;
	}
};

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()) {}
	Character* operator -> () { return character; }

private:
	Character * character;
};
//The Bridge pattern is designed to separate a class's interface from its implementation 
// so you can vary or replace the implementation without changing the client code.