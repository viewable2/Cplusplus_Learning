#include <iostream>
#include <chrono>
#include <ctime>

int search( int narr[], int size, int key );
int random();

int main(){
	
	auto start = std::chrono::steady_clock::now();
	
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr)/sizeof(arr[0]);
	int find = random();  
	//int find = 10;
	
	int isin = search(arr, len, find);
	
	std::cout << find << " find " << std::endl;
	std::cout << isin << " What was returned " << std::endl;
	
	auto end = std::chrono::steady_clock::now();
	auto diff = end - start;
	
	std::cout << std::chrono::duration <double, std::milli> (diff).count() << " ms" << std::endl;
	std::cout << std::chrono::duration <double, std::nano> (diff).count() << " ns" << std::endl;

	system("pause");
}

int search( int narr[], int size, int key ){
	
	for( int i = 0; i < size; i++){
		if (narr[i] == key ){return i;}
	}
	
 return -1;
}

int random(){
	srand(time(0));
	int ran = rand() % 10 + 1;
	return ran;
}