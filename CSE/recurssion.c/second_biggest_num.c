// Using array variable to receive base address from main method

#include<stdio.h>  
#define N 5  
  
void fsBig(int num[], int n, int first, int second)  
{  
    if(n < 2)  
        printf("First Big: %d\nSecond Big: %d\n", first, second);  
    else  
    {  
        if(num[n] > first)  
        {  
            second = first;  
            first  = num[n];  
        }  
        else if(num[n] > second && num[n] != first)  
            second = num[n];  
  
        fsBig(num, --n, first, second);  
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
  
    fsBig(a, N - 1, first, second);  
  
    return 0;  
}  
// Output 1:
// Enter 5 integer numbers
// 5
// 4
// 5
// 2
// 1
// First Big: 5
// Second Big: 4

// Output 2:
// Enter 5 integer numbers
// 5
// 5
// 4
// 4
// 2
// First Big: 5
// Second Big: 4