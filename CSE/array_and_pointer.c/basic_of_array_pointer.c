// Address of Array Elements

#include<stdio.h>  
  
int main()  
{  
    int num[5] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < 5; i++)  
        printf("%d\n", num + i); // OR printf("%d\n", &num[i]);  
  
    printf("\n");  
  
    return 0;  
}  
// Output:
// 6356712
// 6356716
// 6356720
// 6356724
// 6356728
//  Values Associated with Address of Array Elements

#include<stdio.h>  
  
int main()  
{  
    int num[5] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < 5; i++)  
        printf("%d\n", *(num + i));  
  
    printf("\n");  
  
    return 0;  
}  
// Output:
// 1
// 2
// 3
// 4
// 5
// Using num[i] and [i]num Interchangeably

#include<stdio.h>  
  
int main()  
{  
    int num[5] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < 5; i++)  
        printf("%d\n", i[num]);  
  
    printf("\n");  
  
    return 0;  
}  
// Output:
// 1
// 2
// 3
// 4
// 5

//  Print Array Elements Using Pointer Variable

#include<stdio.h>  
int main()  
{  
    int num[5] = {1, 2, 3, 4, 5}, i, *ptr;  
  
    ptr = num; // OR ptr = &num[0];  
  
    for(i = 0; i < 5; i++)  
        printf("%d\n", *ptr++);  
  
    printf("\n");  
  
    return 0;  
}  
// Output:
// 1
// 2
// 3
// 4
// 5
// Print Array Elements In Reverse Order Using Pointer Variable

#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i, *ptr;  
  
    ptr = &num[N - 1]; // OR ptr = num;  
  
    for(i = 0; i < N; i++)  
        printf("%d\n", *ptr--);  
  
    printf("\n");  
  
    return 0;  
}  
// Output:
// 5
// 4
// 3
// 2
// 1
// Arrays, Pointers & Functions: Call By Value

#include<stdio.h>  
  
#define N 5  
  
void display(int x)  
{  
    printf("%d\n", x);  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < N; i++)  
       display(num[i]);  
  
    return 0;  
}  
// Output:
// 1
// 2
// 3
// 4
// 5
//  Arrays, Pointers & Functions: Call By Reference

#include<stdio.h>  
  
#define N 5  
  
void display(int *x)  
{  
    printf("%d\n", *x);  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < N; i++)  
       display(&num[i]);  
  
    return 0;  
}  
// Output:
// 1
// 2
// 3
// 4
// 5


//  Arrays, Pointers & Functions: Printing address of array elements

#include<stdio.h>  
  
#define N 5  
  
void display(int *x)  
{  
    printf("%d\n", x);  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < N; i++)  
       display(&num[i]);  
  
    return 0;  
}  
// Output:
// 6356712
// 6356716
// 6356720
// 6356724
// 6356728


//  Add 1 to all the elements of array, using pointers and function

#include<stdio.h>  
  
#define N 5  
  
void oneplus(int *x)  
{  
    *x = *x + 1;  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < N; i++)  
       oneplus(&num[i]);  
  
    printf("\nArray elements after Oneplus operation!\n");  
    for(i = 0; i < N; i++)  
       printf("%d\n", num[i]);  
  
    return 0;  
}  
// Output:
// Array elements after Oneplus operation!
// 2
// 3
// 4
// 5
// 6

//Source Code: Square all the elements of array – use pointers and function

#include<stdio.h>  
  
#define N 5  
  
void oneplus(int *x)  
{  
    *x = (*x) * (*x);  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    for(i = 0; i < N; i++)  
       oneplus(&num[i]);  
  
    printf("\nArray elements after Oneplus operation!\n");  
    for(i = 0; i < N; i++)  
       printf("%d\n", num[i]);  
  
    return 0;  
}  
// Output:
// Array elements after Oneplus operation!
// 1
// 4
// 9
// 16
// 25


//Source Code: Arrays are pointers in disguise!

#include<stdio.h>  
  
#define N 5  
  
void oneplus5(int x[], int n)  
{  
    int i;  
  
    for(i = 0 ; i < n; i++)  
        x[i] = x[i] + 5;  
  
}  
  
int main()  
{  
    int num[N] = {1, 2, 3, 4, 5}, i;  
  
    oneplus5(num, N);  
  
    printf("\nArray elements after oneplus5 operation!\n");  
    for(i = 0; i < N; i++)  
       printf("%d\n", num[i]);  
  
    return 0;  
}  
// Output:
// Array elements after oneplus5 operation!
// 6
// 7
// 8
// 9
// 10

void oneplus5(int x[], int n)  
{  
    int i;  
  
    for(i = 0 ; i < n; i++)  
        x[i] = x[i] + 5;  
}  
//we can write like this
void oneplus5(int x[], int n)  
{  
    int i;  
  
    for(i = 0 ; i < n; i++)  
        *(x + i) = *(x + i) + 5;  
}  