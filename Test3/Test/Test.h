#pragma once

class Testcon{
	protected: // only in class and subclass
		int hp;
		double speed;
		void talk();
		void walk();
	public: // inside and outside
		Testcon();
		~Testcon();
		void breathe();		
	private: // only in class
		int test32 = 42;
		void op();
};


