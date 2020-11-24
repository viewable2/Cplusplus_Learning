#include <iostream>
#include "Test.h"

double f(double x ){
	return 3*x+4;
}

void testfun(){
	static int runCount = 0; // static makes it so its only initized once 
	std::cout << " Ran" << ++runCount << std::endl;
}

// This type of Cpp file is called implementation