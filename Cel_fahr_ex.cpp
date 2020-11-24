#include <stdio.h>


main (){
	
 float fahr, celsius;
 float lower, upper, step;

 lower = 0;
 upper = 300;
 step = 20;

 printf("\t Converison Table for Fahr to Cels\n\n");

 fahr = lower;
 while ( fahr <= upper ){
	celsius = ( 5.0 / 9.2 ) * ( fahr - 32.0);
	printf("\t \t %3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
 }	 

  printf("\n\n\t Converison Table for Cels to Fahr\n\n");
  
  celsius = lower;
  while( celsius <= upper){
	fahr = ( celsius * ( 9.2 / 5.0 ) ) + 32.0;
	printf("\t \t %3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
	  
 }
  

	getchar();
	
}