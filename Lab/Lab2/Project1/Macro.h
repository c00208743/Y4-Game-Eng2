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
	virtual void redo();
	virtual void undo();
private:
	std::list<Command*> commands;
	std::list<Command*> undone;
};