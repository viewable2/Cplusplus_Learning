 // Get the Greatest Common Divisor

#include <iostream>

int gcd(int	, int);

int main(){

 while(1){
 int a, b = 0;

 std::cin >> a >> b;
 std::cout << "Greatest common divisor of " << a 
 << " and " << b << " " << std::endl << gcd(a ,b);
 std::cin.get();
 }
 
}


int gcd(int p, int q)
{  
 if (q == 0) return p; // Ends when q or first number is divisored to 0
 int r = p % q;
 std::cout << "reminder " << r  << std::endl;
 return gcd(q, r); // This function call hops onto stack & repeats %
}

