// C Program To Calculate Sum of Digits Using Recursion

#include<stdio.h>  
  
int add(int);  
int add_rec(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a 5-digit positive integer number\n");  
    scanf("%d", &num);  
  
    printf("Sum of Digits(without using recursion): %d\n", add(num));  
    printf("Sum of Digits(using recursion): %d\n", add_rec(num));  
  
    return 0;  
}  
  
int add(int num)  
{  
    int sum = 0;  
  
    while(num)  
    {  
        sum = sum + (num % 10);  
        num = num / 10;  
    }  
  
    return(sum);  
}  
  
int add_rec(int num)  
{  
    if(num)  
        return( (num % 10) + add_rec(num / 10) );  
    else  
        return 0;  
}  