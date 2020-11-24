#pragma once 

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
};















