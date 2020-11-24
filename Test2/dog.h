#pragma once

class Dog : public Mammal {
	public:
		Dog();
		~Dog();
		virtual void talk() override { printf( " Woof! \n");}
		virtual void walk() override { printf( " Left front paw & back right paw, at the speed of %4.2f \n", speed);}
};

