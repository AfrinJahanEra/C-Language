//  C Program To Find Sum of Natural Numbers Using Recursion

#include<stdio.h>  
  
int sum(int num)  
{  
    if(num)  
        return(num + sum(num-1));  
    else  
        return 0;  
}  
  
int main()  
{  
    int count = 25;  
  
    printf("Sum of 1st 25 natural numbers is %d\n", count, sum(count));  
  
    return 0;  
}  
// Output:
// Sum of 1st 25 natural numbers is 325

