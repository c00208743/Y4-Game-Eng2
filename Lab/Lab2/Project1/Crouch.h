#pragma once

#include "Command.h"
#include <iostream>

class Crouch : public Command
{
public:
	virtual void execute() { std::cout << "crouch" << std::endl; };
	virtual void redo() { std::cout << "Redo Crouch" << std::endl; };
	virtual void undo() { std::cout << "Undo Crouch" << std::endl; };
};