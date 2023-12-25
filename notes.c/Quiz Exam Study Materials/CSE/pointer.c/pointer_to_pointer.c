// Pointer To A Pointer In C Programming Language

#include<stdio.h>  
  
int main()  
{  
    int num = 5;  
    int *ptr1, **ptr2;  
  
    ptr1 = &num;  
  
    printf("Num = %d\n", num);  
    printf("Address of Num, using variable num = %d.\n", &num);  
    printf("Address of Num, using pointer ptr1 = %d.\n", ptr1);  
    printf("Value present at Address %d is %d.\n\n", ptr1, *ptr1);  
  
    ptr2 = &ptr1;  
  
    printf("Address of pointer variable ptr1 = %d\n", ptr2);  
    printf("Value present at address %d is %d,  which in turn holds the value %d\n", ptr2, *ptr2, **ptr2);  
           
  
    return 0;  
}  
// Output:
// Num = 5
// Address of Num, using variable num = 6356728.
// Address of Num, using pointer ptr = 6356728.
// Value present at Address 6356728 is 5.

// Ezoic
// Address of pointer variable ptr1 = 6356724
// Value present at address 6356724 is 6356728, which in turn holds the value 5.