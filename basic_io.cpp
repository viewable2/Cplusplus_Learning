#include <iostream>
#include <string>

int main(void){
	
	char character = 'A';
	int integer = 1;
	std::string s = "Hello";
	
	printf("\n\t%d # \t %c Letter\n\n", integer, character);
	
	printf("\tString %s\n\n", s.c_str() );
	
	printf("\n Hello what is your age?\n ");
	
	int age;
	std::cin >> age;
	
	printf("\n I see so your age is %d \n\n", age);
	
	system("pause");
	
}
