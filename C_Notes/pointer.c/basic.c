 //Basics of Pointers In C Programming Language

#include<stdio.h>  
  
int main()  
{  
    int num = 5;  
    int *ptr; // pointer variable  
  
    ptr = &num; // both hold address of num  
  
    printf("Value of num = %d\n", num);  
    printf("Address of num = %d\n", &num);  
    printf("Address of ptr = %d\n", &ptr);  
    printf("Value of ptr = %d\n", ptr);  
    printf("Access value of num from ptr = %d\n", *ptr);  
    printf("Access value of num from num = %d\n", *(&num));  
  
    return 0;  
}  
// Output:
// Value of num = 5
// Address of num = 6356732
// Address of ptr = 6356728
// Value of ptr = 6356732
// Access value of num from ptr = 5
// Access value of num from num = 5
