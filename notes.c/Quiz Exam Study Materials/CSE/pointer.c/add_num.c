//C Program To Add Two Numbers using Pointers and Without using Function

// #include<stdio.h>  
  
// int main()  
// {  
//     int a, b, c, *ptr1, *ptr2;  
  
//     ptr1 = &a;  
//     ptr2 = &b;  
  
//     printf("Enter 2 numbers\n");  
//     scanf("%d%d", &a, &b);  
  
//     c = *ptr1 + *ptr2;  
  
//     printf("Using *ptr1 + *ptr2 : %d + %d = %d\n", a, b, c);  
  
//     c = *(&a) + *(&b);  
  
//     printf("Using  *(&a) + *(&b) : %d + %d = %d\n", a, b, c);  
  
//     return 0;  
// }  
// Output:
// Enter 2 numbers
// 25
// 25
// Using *ptr1 + *ptr2 : 25 + 25 = 50
// Using (&a) + *(&b) : 25 + 25 = 50

// Ezoic
// Logic To Add Two Numbers using Pointers
// Here we are storing the address of variable a in pointer variable ptr1 and address of variable b in pointer variable ptr2.

// We know that any address preceded by * would fetch the value present at that address. So we use following code to get the addition of 2 numbers result using pointers.

// c = *ptr1 + *ptr2;

// Source Code: C Program To Add Two Numbers using Pointer and Function
// view plaincopy to clipboardprint?
#include<stdio.h>  
  
void addition(int, int, int*);  
  
int main()  
{  
    int a, b, c;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
  
    addition(a, b, &c);  
  
    printf("%d + %d = %d\n", a, b, c);  
  
    return 0;  
}  
  
void addition(int x, int y, int *z)  
{  
    *z = x + y;  
}  
// Output:
// Enter 2 numbers
// 10
// 40
// 10 + 40 = 50
