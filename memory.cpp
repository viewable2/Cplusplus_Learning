#include <iostream>
#include <string>

class Player{
	protected:
		std::string name;
		int hp;
	public:
		Player();
		~Player();
};

Player::Player(void){printf(" Player born \n");}
Player::~Player(void){printf(" Player died \n");}

int main(){
	
	Player *player = new Player(); // dynamicly allocation
	// pointer types are not automatically destoryed when out of scope
	// variables are deleted when out of scope
	
	delete player; // deleteion invokes dtor 
	
	// memory leaks is when allocated memory is never deleted and memory runs out 
	
	system("pause");
	return 0; // Deconstructors run at end time 
} // 118
// https://stackoverflow.com/questions/406081/why-should-i-avoid-multiple-inheritance-in-c





















