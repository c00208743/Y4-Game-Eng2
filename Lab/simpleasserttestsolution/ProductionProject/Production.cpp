#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

int Production::testSize(int size)
{
	return size;
}
int Production::testRange(int a)
{
	if (a <= 0 ) {
		return -1;
	}
	else if (a > 46) {
		return -1;
	}

	return a;
}

int Production::testDup(std::vector<int> vector)
{
	int vSize1 = vector.size();
	std::sort(vector.begin(), vector.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7 
	auto last = std::unique(vector.begin(), vector.end());
	vector.erase(last, vector.end());

	if (vSize1 != vector.size()) {
		return 0;
	}

	return 1;
}

int Production::testVector(std::vector<int> random, std::vector<int> vector )
{
	int score= 0;

	for (int j = 0; j < random.size(); j++)
	{
		for (int i = 0; i < vector.size(); i++)
		{
			if (random[j] == vector[i]) {
				score++;
			}
		}
	}

	return score;
}