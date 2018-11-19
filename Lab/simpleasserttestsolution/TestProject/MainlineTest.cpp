#include <iostream>
#include <assert.h>
#include <vector>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	std::vector<int> v;

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	v.push_back(f);

	

	cout << p.someMethod(a) << endl;
	assert(p.someMethod(a) == 0);
	//assert(p.someMethod(a) == 1);

	cout << p.testSize(v.size()) << endl;
	assert(p.testSize(v.size()) == 6);

	cout << p.testRange(a) << endl;
	for (int i = 0; i < v.size(); i++)
	{
		assert(p.testRange(v[i]) != -1);
	
	}
	
	cout << p.testDup(v) << endl;	
	assert(p.testDup(v) ==1);

	

	cin.get();
}