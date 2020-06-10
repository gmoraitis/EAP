//To access the value stored in the address we use the unary operator (*) 
//that returns the value of the variable located at the address specified by its operand. 
//This is also called Dereferencing.




// C program to demonstrate use of * for pointers in C 
#include <stdio.h> 

int main() 
{ 
	// A normal integer variable 
	int Var = 10; 

	// A pointer variable that holds address of var. 
	int *ptr = &Var; 

	// This line prints value at address stored in ptr. 
	// Value stored is value of variable "var" 
	printf("Value of Var = %d\n", *ptr); 

	// The output of this line may be different in different 
	// runs even on same machine. 
	printf("Address of Var = %p\n", ptr); 

	// We can also use ptr as lvalue (Left hand 
	// side of assignment) 
	*ptr = 20; // Value at address is now 20 

	// This prints 20 
	printf("After doing *ptr = 20, *ptr is %d\n", *ptr); 

	// This prints new value of Var 
	printf("After doing *ptr = 20, the new value of Var is %d\n", Var); 

	// This prints the adress of new value of Var 
	printf("The adress of Var is %p\n", &Var); 

	return 0; 
} 
