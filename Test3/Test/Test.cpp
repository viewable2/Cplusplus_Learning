#include <iostream>
#include "test.h"

Testcon::Testcon(){
	
	hp = 100;
	speed = 1.0f;
	printf("\n  Parent Testcon constructor \n");
	
}

Testcon::~Testcon(){
	printf("\n  Parent Testcon Deconstructor \n ");
}

void Testcon::talk(){
	printf("\n Talk in parent ran please override it \n ");
}

void Testcon::walk(){
	printf("\n bla \n ");
}

void Testcon::breathe(){
	printf("\n Being ran from the Testcon parent in breathe \n ");
}

void Testcon::op(){
	printf("\n Private access in Testcon \n");
}

int main(){
	
	
	
	system("pause");
	return 0;
}


