#pragma once

#include <iostream>
#include "Component.h"	

class HealthComponent : public Component
{
public:

	HealthComponent() : health(100) { id = 1; }
	void setHealth(int health) { this->health = health; }
	int getHealth() { return health; }
	

private:
	int health;
};