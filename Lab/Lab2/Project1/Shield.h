#pragma once

#include "Command.h"
#include <iostream>

class Shield : public Command
{
public:
	virtual void execute() { std::cout << "shield" << std::endl; };
	virtual void redo() { std::cout << "Redo Shield" << std::endl; };
	virtual void undo() { std::cout << "Undo Shield" << std::endl; };
};