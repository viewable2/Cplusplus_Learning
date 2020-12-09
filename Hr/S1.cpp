#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

int main(void)
{
    
	int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	if( 1 <= n <= 9){printf("%d", n);}
	else{printf("Greater than 9");}
	
	getchar();
}
