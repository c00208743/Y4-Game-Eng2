#include <thread>
#include <iostream>
#include <queue>
#include <mutex>

bool flag[2] = {false, false};
int last = 1;

std::mutex mx;
std::condition_variable cv;


void cs1() {
	while (true) {


		flag[0] = true;
		last = 1;
		while (flag[1] && last == 1) {
			//busy wait
		}
		//critical section
		std::cout << "1" << std::endl;
		flag[0] = false;

	}
}

void cs2() {
	while (true) {
		flag[1] = true;
		last = 0;
		while (flag[0] && last == 0) {
			//busy wait
		}
		//critical section
		std::cout << "2" << std::endl;
		flag[1] = false;
	}
}



int main()
{
	std::thread t1(cs1);
	std::thread t2(cs2);
	t1.join();
	t2.join();
	std::cout << "finished!" << std::endl;
	std::cin.get();
}