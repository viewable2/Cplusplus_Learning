#include <iostream>
#include <string>

void pri(bool);
bool te(int, int);
void ptout(struct vect *in);

struct vect{int x,y,z;};

struct play{vect post;};

enum Mounts{ // Bit-shifted enum
	Horse = 1 << 0 , 
	Mare = 1 << 1 , 
	Mule = 1 << 2 , 
	Sheep = 1 << 3 , 
	Chocobo = 1 << 4 };

int main(void){
	
	Mounts ride = Horse;
	
	switch( ride ){
		
		case 0:
			printf(" steed \n ");
			break;
		case 1:
			printf(" mare \n ");
			break;
		case 2:
			printf(" mule \n ");
			break;
		case 3:
			printf(" Baa! \n ");
			break;
		case 4:
			printf(" Chocobo \n ");  
			break;
		default:
			printf(" Invaild \n ");
			break;	
	} 
	
	
 
	system("pause");
} 

