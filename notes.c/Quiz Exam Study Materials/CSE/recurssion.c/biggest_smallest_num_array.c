// Find Biggest Element of An Array using Recursion


#include<stdio.h>  
  
#define N 5  
  
int biggest(int num[], int n, int big)  
{  
    if(n < 0)  
        return big;  
    else  
    {  
        if(big < num[n])  
            big = num[n];  
  
        return biggest(num, --n, big);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer number\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Biggest Element in the array: %d\n", biggest(a, N - 1, a[0]));  
  
    return 0;  
}  
// Output:
// Enter 5 integer number
// 10
// 56
// 83
// 978
// 4
// Biggest Element in the array: 978
// Find Smallest Element of An Array using Recursion: With Return Value
// Method 2: With Return Type


#include<stdio.h>  
  
#define N 5  
  
int smallest(int num[], int n, int small)  
{  
    if(n < 1)  
        return small;  
    else  
    {  
        if(num[n] < small)  
            small = num[n];  
  
        return smallest(num, --n, small);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Smallest Element In The Array: %d\n", smallest(a, N - 1, a[0]));  
  
    return 0;  
}  
// Output:
// Enter 5 integer numbers
// 2
// 1
// 0
// 3
// 5
// Smallest Element In The Array: 0