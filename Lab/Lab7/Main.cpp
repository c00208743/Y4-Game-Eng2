#include <thread>
#include <iostream>
#include <queue>
#include <mutex>

//bool flag[2] = {false, false};
//int last = 1;

const int n = 2; //number of processes = n
int in[n] = { 0,0 };
int last[n] = { 0,0 };

void cs(void *s) {
	
	while (true) {
		int n_processes = (int)s;
		//for every number up to n 
		for (int j = 0; j < n_processes; j++) {
			in[n_processes] = j;
			last[j] = n_processes;
			//[ k = 1 to n stage i !=k]
			for (int k = 1; k <= j; k++) {
				if (k > n_processes) {
					while (in[k] >= in[n_processes] && last[j] == n_processes) {
						//busy wait
					}
				}
			}
			//critical section
			std::cout<< n_processes << "\n";
			in[n_processes] = 0; //exit protocol
		}
	}
}

int main()
{
	

	std::thread t1(cs,(void*)1);
	std::thread t2(cs,(void*)2);
	t1.join();
	t2.join();
	std::cout << "finished!" << std::endl;
	std::cin.get();
}