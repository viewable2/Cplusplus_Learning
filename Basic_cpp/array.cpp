#include <iostream>

int main(){
	
 int arr[] = {1,2,3,4,5}; // 5 
 int len = sizeof(arr)/sizeof(arr[0]);
	
 std::cout << arr << std::endl; // address
 std::cout << *arr << std::endl; // pointing to first item
 std::cout << &arr << std::endl; // address 
 std::cout << arr[0] << std::endl; // 1
 std::cout << len << std::endl; // 5
 std::cout << sizeof(arr) << std::endl; // size of arr in bits
 std::cout << sizeof(arr[0]) << std::endl; // size of bit in one
	
	
 int i = 0;
 while( len > i){
  std::cout << arr[i] << " ";
  i++;
 }
	
 std::cout << std::endl;
	
 system("pause");
}