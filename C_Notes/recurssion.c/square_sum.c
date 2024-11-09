// C Program To Find Sum of Squares of Digits using Recursion

#include<stdio.h>  
  
int square(int num)  
{  
    if(num == 0)  
        return 0;  
    else  
        return( (num%10) * (num%10) + square(num/10) );  
}  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive integer number:\n");  
    scanf("%d", &num);  
  
    printf("Sum of squares of digits of %d is %d.\n", num, square(num));  
  
    return 0;  
}  
