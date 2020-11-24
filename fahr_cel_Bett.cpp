#include <stdio.h>


main (){
	
 float fahr, celsius;
 float lower, upper, step;

 lower = 0;
 upper = 300;
 step = 20;

 fahr = lower;
 while ( fahr <= upper ){
	celsius = ( 5.0 / 9.2 ) * ( fahr - 32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
 }	 

// % 3.0f mean 3 characters wide and no decimal point 
// % 6.1f mean 6 characters wide with one decimal point


	getchar();
	
}