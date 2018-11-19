#include "Production.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>  


int main()
{
	Production p;
	srand(time(NULL));

	std::vector<int> v;
	std::vector<int> RanV;


	int a, b, c, d, e, f;
	int RanA;
	bool loser = false;

	while (p.testSize(RanV.size()) != 6 ) {
		RanA = rand() % 46 + 1;
		RanV.push_back(RanA);
		if (p.testDup(RanV) ==0 ) {
			RanV.pop_back();
		}

	}

	/*for (int i = 0; i < RanV.size(); i++)
	{
		std::cout << RanV[i] << std::endl;
		
	}*/
	std::cout << "Pick a number then press Enter six times" << std::endl;
	std::cin >> a >> b >> c >> d >> e >>f;
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	v.push_back(f);

	std::cout << ""<< std::endl;
	std::cout << "" << std::endl;
	//p.someMethod(10);


	if (p.testSize(v.size()) != 6) {
		std::cout << "enter more numbers" << std::endl;
		loser = true;
	}


	for (int i = 0; i < v.size(); i++)
	{
		if (p.testRange(v[i]) == -1) {
			std::cout << v[i] << " : Is not in range" << std::endl;
			loser = true;
		}
	}

	if (p.testDup(v) == 0) {
		std::cout << "Dup numbers detected" << std::endl;
		loser = true;
	}
	
	if (loser == false) {
		//Check numbers in RanV vs v
		if (p.testVector(RanV, v) == 0) {
			std::cout << "Loser!!! No Numbers" << std::endl;
		}
		if (p.testVector(RanV, v) == 1) {
			std::cout << "Winner!!! One Number" << std::endl;
			std::cout << "You've won $10" << std::endl;
		}
		if (p.testVector(RanV, v) == 2) {
			std::cout << "Winner!!! Two Numbers" << std::endl;
			std::cout << "You've won $100" << std::endl;
		}
		if (p.testVector(RanV, v) == 3) {
			std::cout << "Winner!!! Three Numbers" << std::endl;
			std::cout << "You've won $1000" << std::endl;
		}
		if (p.testVector(RanV, v) == 4) {
			std::cout << "Winner!!! Four Numbers" << std::endl;
			std::cout << "You've won $10,000" << std::endl;
		}
		if (p.testVector(RanV, v) == 5) {
			std::cout << "Winner!!! Five Numbers" << std::endl;
			std::cout << "You've won $100,000" << std::endl;
		}
		if (p.testVector(RanV, v) == 6) {
			std::cout << "Jackpot" << std::endl;
			std::cout << "You've won $1,000,000" << std::endl;
		}
	}


	

	std::cin.get();
	std::cin.get();
}
