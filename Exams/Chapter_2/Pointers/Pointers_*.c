//One more operator is unary * (Asterisk) which is used for two things :
// 1. To declare a pointer variable: When a pointer variable is declared in C/C++, 
// there must be a * before its name.

// 2.To access the value stored in the address we use the unary operator (*) that returns
// the value of the variable located at the address specified by its operand. 
//This is also called Dereferencing.







// C program to demonstrate declaration of 
// pointer variables. 
#include <stdio.h> 
int main() 
{ 
	int x = 10; 

	// 1) Since there is * in declaration, ptr 
	// becomes a pointer varaible (a variable 
	// that stores address of another variable) 
	// 2) Since there is int before *, ptr is 
	// pointer to an integer type variable 
	int *ptr; 

	// & operator before x is used to get address 
	// of x. The address of x is assigned to ptr. 
	ptr = &x; 
    printf("%d\n",*ptr);

	return 0; 
}
