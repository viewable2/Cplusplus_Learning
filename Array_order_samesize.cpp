#include <iostream>

int main(void)
{
	
	int array[] = { 1, 3, 2, 5};
	
	int arr[] = {0, 0, 0, 0, 0, 0, 0, 0};
	
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", array[i]);
	}
	
	system("pause");
	
	for(int i = 0; i < 4; i++)
	{
		for(int k = 0; k < 6; k++)
		{
			if(k == array[i]){arr[k] = array[i];break;}
		}
	}
	
	for(int i = 0; i < 8; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	system("pause");
}



[2] = { 1, 3} = [0], [1]

