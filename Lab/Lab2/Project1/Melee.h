#pragma once

#include "Command.h"
#include <iostream>

class Melee : public Command
{
public:
	virtual void execute() { std::cout << "melee" << std::endl; };
	virtual void redo() { std::cout << "Redo Melee" << std::endl; };
	virtual void undo() { std::cout << "Undo Melee" << std::endl; };
};