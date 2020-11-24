#include <iostream>
#include <ctime>

int Bsearch( int narr[], int size, int num);
int random();

int main(){
	
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr)/sizeof(arr[0]);
	//int find = random();  
	int find = 10;
	
	std::cout << find << " Find " << std::endl;
	
	int isin = Bsearch(arr, len, find);
	
	std::cout << isin << " What was returned " << std::endl;
	
	system("pause");
}

int Bsearch( int narr[], int size, int num){
	
	int low = narr[0];
	int high = narr[size-1];
	
	std::cout << low << " low #" << std::endl;
	std::cout << high << " high #" << std::endl;
	
	while( low <= high ){
		int mid = (low + high)/2;
		//std::cout << low << " low point " << mid << " mid point " << high << " high point " << std::endl;
		//system("pause");
		if ( num < mid){high = mid - 1;} // 5 less than 9 
		else if ( num > mid){low = mid + 1;} // 5 greater than 4
		else {return mid;}
	}

 return 0;
}

int random(){
	srand(time(0));
	int ran = rand() % 10 + 1;
	return ran;
}

/*
 5 < 9
 5 > 4 
 
0 5 10

5  10
0  5

0 + 10 == 10/2 -> 5

5 + 10 = 15/2 == 7.5 -> 7
0 + 5 = 5/2 == 2.5 -> 2
0 + 2 = 2/2 == 1 -> 1

find 10

0 + 10 == 10/2 -> 5

5 + 10 == 15/2 -> 7.5

7 + 10 == 17/2 -> 8.5

8 + 10 == 18/2 -> 9 

9 + 10 == 19/2 -> 9 

9 + 1 = 10 + 10 = 20/2 -> 10

*/