//C Program To Reverse a Number using Recursion

#include<stdio.h>  
#include<math.h>  
  
int reverse(int num)  
{  
    if(num)  
        return( (num%10) * pow(10, (int)log10(num)) + reverse(num/10) );  
    else  
        return 0;  
}  
  
int main()  
{  
    int num, isNegative = 1, result = 0;  
  
    printf("Enter a number to reverse\n");  
    scanf("%d", &num);  
  
    isNegative = (num < 0);  
  
    if(isNegative)  
        num *= -1;  
  
    result = reverse(num);  
  
    if(isNegative)  
        result *= -1;  
  
  
    printf("Reverse of %d is %d\n", num, result);  
  
    return 0;  
}  