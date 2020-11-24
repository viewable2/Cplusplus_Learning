#include <iostream>
#include <string>

void pri();
int te(int, int);
void ptout(struct vect *in);

struct vect{int x,y,z;};

struct play{
	std::string name;
	int age;
	vect pos;
};

int main(void){
	
	enum Item{ Coin, Key, Sanddollar};
	
	Item itemInHand = Key;
	
	
	if ( itemInHand == Key ){printf("Key got lionshead, secret room! \n ");}
	
	else if( itemInHand == Coin){printf("Coin is a rusted brass. Use to buy \n ");}
	
	else if ( itemInHand == Sanddollar){printf("sanddollar has a star, trade it in \n ");}
	
	
	system("pause");
	
} 

