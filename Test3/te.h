#pragma once

class Testcon{
	protected: // only in class and subclass
		int hp;
		double speed;
		virtual void talk();
		virtual void walk() = 0;
	public: // inside and outside
		Testcon();
		void breathe();	
		int msd(int, int);
		int mas(int, int);
	private: // only in class
		int test32 = 42;
		void op();
};


