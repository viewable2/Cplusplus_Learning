#pragma once

#include "te.h"
#include "test3.h"

class Childtest : public Testcon{
	protected: // only in class and subclass
		virtual void walk() override;
	public: // inside and out 
		Childtest();
		~Childtest();
		int test42 = 32;
		float test2;
		int health = hp;
		float speed2 = speed;
		
		void pre();
		
		class Ets* ptr3f;
		class Te* ptr2f; // Calling another class inside class. Make object of class 
		// Must include the header to call that class inside this class 
		
		void prt();
	private: // only in class 
		float test1;
};






