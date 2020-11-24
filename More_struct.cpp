#include <iostream>
#include <string>

struct vect{float x, y, z;};

struct armor{std::string arname; int armorrating; double dubl;};

struct player{
private:
	int age;
	int hp;
	std::string name; // strings are objects 
	armor armorclass; // Player has-an armor
	vect pos;
public:
	void damage ( int amount ){ 
	int reduction = amount - this->armorclass.armorrating; 
	if( reduction < 0){reduction = 0; this->hp-=reduction;}
	} // This keyword makes it so it refers to current object | but it is implied without 
	void recover ( int amount ){ hp += amount;} // its a member function | declared in class of struct
	std::string getName()const{return name;} // GETTER | accessor function used to read private variables
	// no assignemnts to data members can happen inside member function that is const
	void setName(std::string newname){name = newname;} // SETTER | mutator functions used to write to private variables
}; 
/* This is a player object 

// variables of struct player are accessible by all functions inside struct
// You can access name, hp, age in the variable as if local to the function 
// So name, hp variables are shared in all member functions 

// Encapsulation says raw data member should never be accessed directly
// Make classes self contained.
// Objects work bests when they maintain their own internal state variables
// Access modifers
// Structs and class are identical. Only difference is by default structs are public and class is private
 
// struct only really used in backwards compatible C and simple type that don't use encapsulation

// To get data | function members you use a GETTER whom are declared in the classes public

// Private
// GETTER functions only pass a copy of the data
// Setters functions guard from getting incorrect values

// think of functions as add too rather than setting. minize direct access 


*/

int main(void){
	
	player me;
	me.setName("John");
	
	std::cout << " " << me.getName() << std::endl;
	printf(" %s \n", me.getName().c_str() );


	
	system("pause");
} // 115 excs. 
