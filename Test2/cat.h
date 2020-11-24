#pragma once

class Cat : public Mammal{
	public:
		Cat();
		~Cat();
		virtual void talk() override { printf(" Meow \n");}
		virtual void walk() override { printf( " Left front paw & back right paw, at the speed of %4.2f \n", speed);}
};





