#include <iostream>

class Testclass{
	
	private:
	char df = 'a';
	
	protected:
	int ba = 2;
	bool ret = true;
	
	public:
	
	virtual int td();
	int mathadd();
	
};

Testclass::mathadd(){int y = 1; return y;}

class runclass : public Testclass{

	public:
	
	virtual int td() override{ int x = 5; return x;}
	
};

int main(){
	
	/*
	int size;
	
	std::cin >> size;
	
	int *array = new int [size];
	
	delete[] array;*/
	
	runclass test;
	int z = test.td();
	
	printf(" %d  \n %d \n",  z, test.td() );
	
	Testclass* testprt = &test;
	
	printf(" %p  ,  \n ", testprt);
	

	system("pause");
	return 0; // Deconstructors run at end time 
} // 177


/*
actors are the more basic pawn

to place anything in UE4 world it must dervice an actor class 

Pawn is an object that reprsents something you or AI control on screen

When Pawn or actor is controlled its called controller or AI 

Change default map go to project settings in Maps & mode

When adding a new actor you add a new class 

UCLASS() is macro that makes c++ code available in UE4 editor 
GENERATED_UCLASS_BODY() macro copies & paste code that UE4 needs to make function work
UProperty() adds an option into the class that can be controlled to be edited in editor 
Fstrings are UE4 version of <string>

bad practice to hardcore assets into the game. So we can change loaded during runtime
To do this create a blueprint from C++ class



*/