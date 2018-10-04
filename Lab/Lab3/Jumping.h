#pragma once

#include <iostream>
#include "Idle.h"
#include "State.h"

class Jumping : public State
{
public:
	Jumping() { };
	~Jumping() {  };
	void idle(Animation* a);

};