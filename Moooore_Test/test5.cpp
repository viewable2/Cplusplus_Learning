#include <iostream>

#define LOG_DEBUG(x) std::cout << x << std::endl;

void LOG(const char* message) {
	printf(message);
}
void LOG(const char* message, int* value) {
	printf(message, value);
}
void LOG(const char* message, int** value) {
	printf(message, value);
}
void LOG(const char* message, int& value) {
	printf(message, value);
}

int main(void) {

	LOG(" Hello World!\n");
	
	int a = 8;
	int b = 1;

	int* ref = &a;

	LOG("Printing reference %d, ", *ref);

	ref = &b;

	LOG("Printing reference %d, \n", *ref);

	LOG("Printing reference %p, ", &a);
	LOG(" %p, \n", &ref);

	int& ref2 = a;
	ref2 = 2;
	LOG("%d\n", ref2);

	LOG("Printing reference %p, ", &a);
	LOG(" %p, \n", &ref2);

	int z = 3;
	LOG("%d\n",z);

	system("pause");
}

