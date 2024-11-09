//C Program To Count Digit k in Number n using Recursion

#include<stdio.h>  
  
int occurrence(int, int);  
  
int main()  
{  
    int n, k;  
  
    printf("Enter a positive integer number\n");  
    scanf("%d", &n);  
  
    printf("Which digits occurrence you want to check for?\n");  
    scanf("%d", &k);  
  
    printf("\n%d has appeared %d times in %d.\n", k, occurrence(n, k), n);  
  
    return 0;  
}  
  
int occurrence(int num, int k)  
{  
    if(num == 0)  
        return 0;  
    else if(k == (num%10))  
        return(1 + occurrence(num/10, k));  
    else  
        return(occurrence(num/10, k));  
}  
// without recurssion
#include<stdio.h>  
  
int occurrence(int, int);  
  
int main()  
{  
    int n, k;  
  
    printf("Enter a positive integer number\n");  
    scanf("%d", &n);  
  
    printf("Which digits occurrence you want to check for?\n");  
    scanf("%d", &k);  
  
    printf("\n%d has appeared %d times in %d.\n", k, occurrence(n, k), n);  
  
    return 0;  
}  
  
int occurrence(int num, int k)  
{  
    int count = 0;  
  
    while(num)  
    {  
        if(num%10 == k)  
            count++;  
  
        num = num / 10;  
    }  
    return count;  
}  