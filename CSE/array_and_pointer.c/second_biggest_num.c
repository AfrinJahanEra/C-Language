// C Program To Find First and Second Biggest Element In An Array using Recursion

#include<stdio.h>  
  
#define N 5  
  
void fsBig(int *num, int n, int first, int second)  
{  
    if(n < 2)  
        printf("First Big: %d\nSecond Big: %d\n", first, second);  
    else  
    {  
        if(*num > first)  
        {  
            second = first;  
            first  = *num;  
        }  
        else if(*num > second && *num != first)  
            second = *num;  
  
        fsBig(--num, --n, first, second);  
    }  
}  
  
int main()  
{  
    int a[N], i, first, second, count = 0;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    for(i = 0; i < N; i++)  
    {  
        if(a[i] != a[0])  
        {  
            ( (a[0] > a[i]) ?  
              (first = a[0], second = a[i]) :  
              (first = a[i], second = a[0]) );  
            break;  
        }  
        else  
            count++;  
    }  
  
    if(count == N)  
    {  
        printf("Biggest: %d\nSmallest: %d\n", a[0], a[0]);  
        return 0;  
    }  
  
    fsBig(&a[N - 1], N - 1, first, second);  
  
    return 0;  
}  
// Output 1:
// Enter 5 integer numbers
// 5
// 5
// 4
// 2
// 1
// First Big: 5
// Second Big: 4

// Output 2:
// Enter 5 integer numbers
// 5
// 5
// 5
// 5
// 5
// Biggest: 5
// Smallest: 5