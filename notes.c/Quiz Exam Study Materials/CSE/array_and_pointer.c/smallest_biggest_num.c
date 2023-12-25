//  Find Biggest Element of An Array using Recursion: With No Return Type
//Method 1: With No Return Type

#include<stdio.h>  
  
#define N 5  
  
void biggest(int *num, int n, int big)  
{  
    if(n < 0)  
        printf("Biggest element is %d\n", big);  
    else  
    {  
        if(*num > big)  
            big = *num;  
  
        biggest(++num, --n, big);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    biggest(a, N - 1, a[0]);  
  
    return 0;  
}  
// Output:
// Enter 5 integer number
// 1
// 2
// 3
// 4
// 5
// Biggest Element in the array: 5

// Find Biggest Element of An Array using Recursion: With Return Value
// Method 2: With Return Type

#include<stdio.h>  
  
#define N 5  
  
int biggestt(int *num, int n, int big)  
{  
    if(n < 0)  
        return big;  
    else  
    {  
        if(big < *num)  
            big = *num;  
  
        return biggestt(++num, --n, big);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer number\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Biggest Element in the array: %d\n", biggestt(a, N - 1, a[0]));  
  
    return 0;  
}  
// Output:
// Enter 5 integer number
// 1
// 2
// 5
// 3
// 4
// Biggest Element in the array: 5

// C Program To Find Smallest Element in An Array using Recursion
// Method 1: With No Return Type

#include<stdio.h>  
  
#define N 5  
  
void smallest(int *num, int n, int small)  
{  
    if(n < 0)  
        printf("Smallest Element In The Array: %d\n", small);  
    else  
    {  
        if(small > *num)  
            small = *num;  
  
        smallest(++num, --n, small);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    smallest(a, N - 1, a[0]);  
  
    return 0;  
}  
// Output:
// Enter 5 integer numbers
// 2
// 1
// 3
// 4
// 5
// Smallest Element In The Array: 1
