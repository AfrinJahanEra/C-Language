//  C Program To Find nPr Factorial using Recursion

#include<stdio.h>  
  
int factorial(int);  
  
int main()  
{  
    int n, r;  
    float npr;  
  
    printf("Enter positive integer value for n and r\n");  
    scanf("%d%d", &n, &r);  
  
    npr = factorial(n) / factorial(n-r);  
  
    printf("\nnPr Factorial of %d and %d is %0.2f\n", n, r, npr);  
  
    return 0;  
}  
  
int factorial(int num)  
{  
    if(num)  
        return(num * factorial(num - 1));  
    else  
        return 1;  
}  