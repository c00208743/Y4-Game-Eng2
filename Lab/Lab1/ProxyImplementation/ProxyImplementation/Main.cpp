#include <iostream>
#include "GraphicProxy.h"

using namespace std;

//Client Implementation
int main(void) {

	GraphicProxy gp;
	gp.Draw();

	cin.get();
}
// proxy is a wrapper or agent object that is being called 
// by the client to access the real serving object behind the scenes.