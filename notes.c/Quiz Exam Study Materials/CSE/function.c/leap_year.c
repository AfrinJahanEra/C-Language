//C program to check leap year or not using c program
#include<stdio.h>  
#include<stdbool.h>  
  
bool leap(int); // function prototype  
  
int main()  
{  
    int year;  
  
    printf("Enter a year to find leap year or not\n");  
    scanf("%d", &year);  
  
    //function call leap(year);  
    if( leap(year) )  
    {  
        printf("%d is leap year\n", year);  
    }  
    else  
    {  
        printf("%d is not leap year\n", year);  
    }  
  
    return 0;  
}  
  
//function definition  
bool leap(int year)  
{  
    if(year % 100 == 0)  
    {  
        if(year % 400 == 0)  
            return true;  
        else  
            return false;  
    }  
    else  
    {  
        if(year % 4 == 0)  
            return true;  
        else  
            return false;  
    }  
} 