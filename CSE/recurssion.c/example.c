// Recursive Functions In C Programming Language: Example

#include<stdio.h>  
  
void natural(int);  
  
int main()  
{  
    int num = 1;  
  
    natural(num);  
  
    return 0;  
}  
  
void natural(int num)  
{  
    if(num <= 3)  
    {  
        natural(num+1);  
        printf("%d  ", num);  
    }  
  
    return;  
}  
// Output:
// 3 2 1

