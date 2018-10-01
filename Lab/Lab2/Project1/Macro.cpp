#include "Macro.h"

Macro::Macro()
{

}

Macro::~Macro()
{
	std::cout << "deconstructing" << std::endl;
}

void Macro::add(Command* command)
{
	commands.push_back(command);
}

void Macro::remove(Command* command)
{
	commands.remove(command);
}


void Macro::execute()
{
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}

	std::cout << "executed" << std::endl;
}