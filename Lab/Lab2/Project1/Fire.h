#pragma once

#include "Command.h"
#include <iostream>

class Fire : public Command
{
public:
	virtual void execute() { std::cout << "fire" << std::endl; };
	virtual void redo() { std::cout << "Redo Fire" << std::endl; };
	virtual void undo() { std::cout << "Undo Fire" << std::endl; };
};