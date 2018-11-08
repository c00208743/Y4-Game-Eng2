#include "HandleClass.h"
int main() {
	HandleToCharacter handle;
	handle->Print();

	cin.get();
}
//decouple an asbraction from its implememntation so that the two vary indendantly