#include<stdio.h> 

int main() 
{ 
	int x = 20, *y; 
	
	// Assume address of x is 500 and 
	// integer is 4 byte size 
	y = &x;
	(*y)++;
	printf("x = %d, y = %d", x, *y); 
	return 0; 
} 

