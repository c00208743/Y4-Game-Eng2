#pragma once

#include "Command.h"
#include <iostream>
#include <list>

class Macro : public Command {
public:
	Macro();
	virtual ~Macro();
	virtual void add(Command* command);
	virtual void remove(Command* command);
	virtual void execute();
private:
	std::list<Command*> commands;
};