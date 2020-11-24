#ifndef PROTO_H
#define PROTO_H

#define PI 3.14159 // This is a Macro | Prepocessor directives this will c/p any use of PI to 3.14... before compile

const double PIs = 3.14159; // prefer use over marco as data is stored
// const make it so the data stays the same 

const static int foo = 41; // static limits scope to compliation unit & static initialization. Const disallows modifications

#define PRINT(x) printf(" "); printf( x ); printf(" \n ");
// PRINT("Yes") now prints out all three printf functions 
// Use inline functions instead safer and easier to deal with

inline int max ( int a, int b){if ( a > b ) return a; else return b;} 
// Normal function calls executes a jump, inline functions are copied to the point of function call no jump
// Save execute time Inlines functions need to be defined in .h files 
// made for speed at cost of bloat

void pri(bool); // These are function prototypes
bool te(int, int);
void ptout(struct vect *in); 
double f(double x);
void testfun();

struct vect{int x,y,z;};

struct play{vect post;};


extern int superglobal; // Same as function prototype, but its for a variable. Globally scoped

enum Mounts{ // Bit-shifted enum
	Horse = 1 << 0 , 
	Mare = 1 << 1 , 
	Mule = 1 << 2 , 
	Sheep = 1 << 3 , 
	Chocobo = 1 << 4 };


#endif
// Is called the interface as it contains declarations of functions 
// The Declar then resloves during Linking phase to resolve the dependencies.
// Templates changes things