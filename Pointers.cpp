#include <iostream>

int main(void){
	
	int x = 20;
	int *ptr;
	ptr = &x;
	
	int **ptrs;
	ptrs = &ptr;
	
	int *asd;
	
	// x is a value
	// ptr is a value
	
	// x is storing 20
	// ptr is storing the address of x
	
	// using * we can see if that address exists, and what the value is 
	
	std::cout << x << "  value stored in x " << std::endl;
	std::cout << ptr << " value stored in ptr " << std::endl << std::endl;
	std::cout << &x << "  adress x " << std::endl;
	std::cout << &ptr << "  address ptr " << std::endl;
	std::cout << *ptr << "  what ptr is pointing " << std::endl << std::endl;
	
	std::cout << ptrs << "  value stored in ptrs " << std::endl;
	std::cout << &ptrs << "  address ptrs " << std::endl;
	std::cout << *ptrs << "  ptrs pointing  " << std::endl;
	std::cout << **ptrs << "  what ptrs pointer is pointing  " << std::endl << std::endl;
	
	std::cout << asd << std::endl; // value in empty variable
	std::cout << *asd << std::endl; // what the empty variable is pointing to 
	std::cout << &asd << std::endl; // address of the empty variable 
	
	
	
	system("pause");
	
}
