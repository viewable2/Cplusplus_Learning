#include <iostream>
#include <string>

void ptout(struct player *me); // deference the address passed in main 

struct vect{
	float x, y, z;
};

struct player{
	int age;
	std::string name;
	vect pos;
};

int main(){
	
	player me; // create a player object called me
	
	me.age = 20;
	me.name = "will";
	me.pos.x = 1, me.pos.y = 2, me.pos.z = 0;

	player noah;
	noah.age = 30;
	noah.name = "noah";
	noah.pos.x = me.pos.y = me.pos.z = 0;

	// access member of struct use . 
	// above is assigning values to the new object me

	ptout(&me); // pass the address of the object 
	ptout(&noah);
	
	/*
	printf(" \n\t object me %p\n\t", me);
	printf(" address age me %p\n\t", &me.age);
	printf(" address name me %p\n\t", &me.name);
	printf(" address of object %p\n\n\t", &me);
	
	printf(" object noah %p\n\t", noah);
	printf(" address age noah %p\n\t", &noah.age);
	printf(" address name noah %p\n\t", &noah.name);
	printf(" address of object %p\n\t", &noah);
	
	*/
	
	//std::cout << std::endl << "\t " << &me.age << " " << &me << std::endl; // use for checking
	
	printf("\n");
	system("pause");
}


void ptout(struct player *me){
	
	printf("\n\t age is %d ", me->age ); // access member of a struct through a point use -> 
	printf("\n\t name is %s ", me->name.c_str() );
	printf("\n\t position is %.02f X, %.02f Y, %.02f Z \n\t", me->pos.x, me->pos.y, me->pos.z );
	
}