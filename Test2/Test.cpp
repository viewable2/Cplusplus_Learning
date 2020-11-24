#include <iostream>
#include <string>

class Mammal{
	protected:
		int hp;
		double speed;
	public:
		Mammal();
		~Mammal();
		void breathe(){printf(" Breathe in... breathe out \n");}
		virtual void talk(){ printf(" Mammal talk... override this funtion! \n");}
		virtual void walk() = 0;// pure virtual function, required to override 
};// abstract class in C++ is any class with least one pure virtual function
// with this abstraction you cannot create | instantiated the object 

// public is accessible anywhere inside or outside the class
// private is only acessible inside the class but not other classes
// protect is only accessible inside the class and inside of derived subclasses

class Dog : public Mammal {
	public:
		Dog();
		~Dog();
		virtual void talk() override { printf( " Woof! \n");}
		virtual void walk() override { printf( " Left front paw & back right paw, at the speed of %4.2f \n", speed);}
};
// virtual functions is an implementation that can be overriden in a derived class

class Cat : public Mammal{
	public:
		Cat();
		~Cat();
		virtual void talk() override { printf(" Meow \n");}
		virtual void walk() override { printf( " Left front paw & back right paw, at the speed of %4.2f \n", speed);}
};

// Derived class : base class
// : means it is inherits from or is-a 
class Human : public Mammal{
	bool civil;
	public:
		Human();
		~Human();
		virtual void talk() override{printf(" I'm looking good for a human \n");}
		virtual void walk() override{printf(" Left, right, left, at the speed of %4.2f \n", speed);}
		void attack( Human & other){
			if(civil){printf(" Why would a human attack another \n ");}
			else{ printf(" Human attack another! \n");}
		}
};

Mammal::Mammal(){ hp = 100; speed = 1.0; printf(" A mammal is created! \n"); }
Mammal::~Mammal(){printf( "\n Mammal has fallen!s \n" );}
Dog::Dog(){printf(" A dog is born! \n");}
Dog::~Dog(){printf(" \n A dog has died \n");}
Cat::Cat(){ printf(" A cat is born \n");}
Cat::~Cat(){ printf(" \n The cat has died \n");}
Human::Human(){ printf(" New human \n"); speed = 2.0; civil = true;}
Human::~Human(){ printf(" \n Human has died \n");}
// use system("pause") before deconstructor as passes to quick 

int main(){
	
	Cat cat;
	
	Mammal* mammalPtr = &cat;
	
	printf(" cat pointer %p \n ", mammalPtr);
	
	
	system("pause");
	return 0; // Deconstructors run at end time 
} // 133
// https://stackoverflow.com/questions/406081/why-should-i-avoid-multiple-inheritance-in-c





















