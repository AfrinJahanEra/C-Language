// C Program To Swap Two Numbers using Function
//without pointer
// #include<stdio.h>  
  
// void swap(int, int);  
  
// int main()  
// {  
//     int a, b;  
  
//     printf("Enter values for a and b\n");  
//     scanf("%d%d", &a, &b);  
  
//     printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
//     swap(a, b);  
  
//     return 0;  
// }  
  
// void swap(int x, int y)  
// {  
//     int temp;  
  
//     temp = x;  
//     x    = y;  
//     y    = temp;  
  
//     printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
// }  


//C Program To Swap Two Numbers using Pointers and Function

#include<stdio.h>  
  
void swap(int*, int*);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(&a, &b);  
  
    printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
  
    return 0;  
}  
  
void swap(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  
// Output 1:
// Enter values for a and b
// 100
// 200

// Before swapping: a = 100 and b = 200

// After swapping: a = 200 and b = 100

// Output 2:
// Enter values for a and b
// 30
// 20

// Before swapping: a = 30 and b = 20
// Ezoic

// After swapping: a = 20 and b = 30