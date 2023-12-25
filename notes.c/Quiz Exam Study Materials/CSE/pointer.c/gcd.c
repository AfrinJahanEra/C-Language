//  C Program To Find GCD using Pointers and Functions, using Euclid’s Algorithm

// logic
// 1980 / 1617 = 1	1980 – 1 * 1617 = 363
// 1617 / 363 = 4	1617 – 4 * 363 = 165
// 363 / 165 = 2	363 – 2 * 165 = 33
// 5 / 33 = 5	    165 – 5 * 33 = 0

#include<stdio.h>  
  
void calc_gcd(int, int, int*);  
  
int main()  
{  
    int j, k, gcd;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &j, &k);  
  
    calc_gcd(j, k, &gcd);  
  
    printf("\nGreatest Common Divisor of %d and %d is %d.\n", j, k, gcd);  
  
    return 0;  
}  
  
void calc_gcd(int numerator, int denominator, int *gcd)  
{  
    int temp, num;  
  
    if(denominator == 0)  
    {  
        *gcd = numerator;  
    }  
    else if(numerator == 0)  
    {  
        *gcd = denominator;  
    }  
    else  
    {  
        num  = numerator / denominator;  
        temp = numerator - num * denominator;  
  
        while(temp)  
        {  
            numerator   = denominator;  
            denominator = temp;  
            num  = numerator / denominator;  
            temp = numerator - num * denominator;  
        }  
  
        *gcd = denominator;  
    }  
}  
// Output 1:
// Enter 2 integer numbers
// 1980
// 1617

// Greatest Common Divisor of 1980 and 1617 is 33.
// Ezoic

// Output 2:
// Enter 2 integer numbers
// 1617
// 1980

// Greatest Common Divisor of 1617 and 1980 is 33.

// Output 3:
// Enter 2 integer numbers
// 15
// 20

// Greatest Common Divisor of 15 and 20 is 5.

// Output 4:
// Enter 2 integer numbers
// 20
// 15

// Greatest Common Divisor of 20 and 15 is 5.