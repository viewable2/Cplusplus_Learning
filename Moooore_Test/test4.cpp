#include <iostream> 
#include <thread>

static bool s_Finished = false;

void Dowork(){
	while(!s_Finished){
		printf("wwww");	
	}
}

int main(void){
	
	std::thread worker(Dowork);
	
	std::cin.get();
	s_Finished = true;
	
	worker.join();
	
	std::cin.get();
	
	system("pause");
}