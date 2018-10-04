#pragma once

#include <iostream>
#include "Animation.h"
#include "State.h"

class Idle: public State
{
public:

	void jumping(Animation* a);
	void climbing(Animation* a);

	
};