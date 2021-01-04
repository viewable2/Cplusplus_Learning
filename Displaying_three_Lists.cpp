#include <iostream>

int main(void)
{
	
	std::string array[] = { "cat", "dog", "bird" , "lazy" , "sloth", };
	
	std::string a[3][4] = 
	{  
	{"jessica", "alex", "john", "cat"} ,   /*  initializers for row indexed by 0 */
	{"coin", "bird", "rudy", "alain"} ,   /*  initializers for row indexed by 1 */
	{"dog", "water", "wood", "computer	"}   /*  initializers for row indexed by 2 */
	};
	
	int arr[] = {0, 0, 0, 0, 0, 0, 0, 0};
	
	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", array[i].c_str());
	}
	
	system("pause");
	
	for(int i = 0; i < 3; i++)
	{
		for(int k = 0; k < 4; k++)
		{
			printf("%s\n", a[i][k].c_str());
		}
	}
	
	system("pause");
	system("clear");
	
	for(int i = 0; i < 4; i++)
	{
		printf("%s\n", a[0][i].c_str());
	}

	system("pause");
	system("clear");
	
	printf("\n\t");
	for(int i = 0; i < 4; i++)
	{
		for(int k = 0; k < 3; k++)
		{
			printf("%s\t", a[k][i].c_str());
			if(k == 2){printf("\n\t");}
		}
	}
	
	system("pause");
}
