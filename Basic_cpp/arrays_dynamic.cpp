#include <iostream>

class Player{
	protected:
		int hp;
	public:
		Player();
		~Player();
};

Player::Player(void){printf(" Player born \n");}
Player::~Player(void){printf(" Player died \n");}

int main(){
	
	int size;
	
	std::cin >> size;
	
	int *array = new int [ size ]; // allocating memory for the array 
	// C equivate (int*)malloc( size*sizeof(int));
	
	for( int i = 0; i <= size; i++){
		array[i] = i * 2;
		printf(" Address %p  | #  %d \n", &array[i], array[i]);
	}
	
	delete[] array;
	// C equivate free(array);
	
	system("pause");
	return 0; // Deconstructors run at end time 
} // 118
// https://stackoverflow.com/questions/406081/why-should-i-avoid-multiple-inheritance-in-c

// arrays
// unreal has build in collection classes (TArray<T>)



















