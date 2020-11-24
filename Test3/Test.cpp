#include <iostream>
#include "Test.h"

Childtest::Childtest(){// Runs at object creation 
	test1 = 0.0222;
	test2 = test1;
	ptr2f->n2(); // point to function of object made in header.
}

Childtest::~Childtest(){
	printf("\n Child death deconstructor \n ");
}

void Childtest::walk() {
	printf("\n Child override walk function \n");
}

void Childtest::prt(){
	Te b; // Initilize a new object for Te class
	b.n2();// Call new object n2() variable
	
	
	ptr2f->n2();// Point to function of the object created in the header 

	// They both do the same thing
	
}
void Childtest::pre(){
	printf(" Parent math function %d ", msd(6,5) );
}

int main(){
	
	Childtest* apple = new Childtest;
	//Childtest apple;
	
	printf("\n Apple is %d \n", apple->test42); // Public Child called
	
	//printf("\n Apple is %d \n", apple.test1); // Private Child called : Error private
	//printf("\n Apple is %d \n", apple.walk()); // Protected child override called : Error
	// To access use a function or variable thats public;
	
	printf("\n Apple is %.06f \n", apple->test2); // Constructor is ran at object creatation
	// test1 which is privated can now be called through test2 

	//apple.Childtest(); // You can't call contructors
		
	printf("\n Apple is %d \n", apple->health);
	printf("\n Apple is %.06f \n", apple->speed2); // Accessing Parent Protected variables
	
	apple->breathe(); // Accessing the Parent's class Public void function 
	//printf("\n Apple is \n", apple.breathe() ); 

	printf("\n Apple is %d \n", apple->mas(5,1) );
	// Accessing Parent's class Public int Function
	
	apple->prt(); // Calling void function in public class
	
	printf("\n ----------------------------- \n");
	
	apple->pre();
	
	apple->ptr3f->pt(); // calling public object to call its public function

	delete apple;
		
	system("pause");
	return 0; // Deconstructors run at end time 
} 















