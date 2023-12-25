// C Program To Find nCr Factorial using Recursion

#include<stdio.h>  
  
int factorial(int);  
  
int main()  
{  
    int n, r;  
    float ncr;  
  
    printf("Enter a positive value for n and r\n");  
    scanf("%d%d", &n, &r);  
  
    ncr = factorial(n) / ( factorial(r) * factorial(n - r) );  
  
    printf("\nnCr Factorial of %d and %d is %0.2f.\n", n, r, ncr);  
  
    return 0;  
}  
  
int factorial(int num)  
{  
    if(num)  
        return(num * factorial(num-1));  
    else  
        return 1;  
}  