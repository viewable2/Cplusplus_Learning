#include <iostream>
#include "te.h"

Testcon::Testcon(){
	
	hp = 100;
	speed = 1.022f;
	printf("\n  Parent Testcon constructor \n");
	
}

void Testcon::talk(){
	printf("\n Talk in parent ran please override it \n ");
}

void Testcon::breathe(){
	printf("\n Being ran from the Testcon parent in breathe \n ");
}

void Testcon::op(){
	printf("\n Private access in Testcon \n");
}

int Testcon::mas(int a, int b){
	return a-b;
}

int Testcon::msd(int x, int y){
	return x+y;
}