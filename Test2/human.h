#pragma once

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


















