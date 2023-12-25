// C Program To Find Size of Pointer Variables

#include<stdio.h>  
  
int main()  
{  
    printf("Size of int pointer = %d bytes.\n", sizeof(int*));  
    printf("Size of char pointer = %d bytes.\n", sizeof(char*));  
    printf("Size of float pointer = %d bytes.\n", sizeof(float*));  
    printf("Size of double pointer = %d bytes.\n", sizeof(double*));  
    printf("Size of long int pointer = %d bytes.\n", sizeof(long*));  
    printf("Size of short int pointer = %d bytes.\n", sizeof(short*));  
  
    return 0;  
}  
// Output:
// Size of int pointer = 4 bytes.
// Size of char pointer = 4 bytes.
// Size of float pointer = 4 bytes.
// Size of double pointer = 4 bytes.
// Size of long int pointer = 4 bytes.
// Size of short int pointer = 4 bytes.

// If you observe the output of above C program you can see that pointer variables, irrespective of their data type, consume 4 bytes of data in the memory.

// Ezoic
// Note: “But the number of bytes allocated for different data types and pointer variables are machine dependent. 16-bit, 32-bit, 64-bit computers allocate different bytes of memory. But pointer variables of any data type will always have same number of bytes occupied in the memory. For Example, if the computer allocates 2 bytes for pointer variable, then all the pointer variables, irrespective of their data type, will occupy 2 bytes in the memory.”

// A pointer variable of type float holds only the address of floating point variable. A char pointer variable holds only the address of char type variable. But still the address of all these type of pointer variable is number. Addresses are always numbers and it can’t be a character, a string or real/floating/double numbers.

// Also note that addresses are unique. There can’t be 2 location in your computers memory with same address.

// Ezoic
// Note: Observe that I’m using %d as format specifier while printing the size of data type, that’s because sizeof() function/method returns integer type data i.e., number of bytes occupied in the computers memory.

// // Note: sizeof() method takes a single argument and it is not a function whose value is determined at run time, but rather an operator whose value is determined by compiler – so it’s called as compile time unary operator