#include<stdio.h>

int main(){
    int a, b ,x ,y ,result1,result2 ;


    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&a ,&x ,&b ,&y);

    result1= (a * y) + (b * x) ;
    result2= x * y ;
    printf("The sum is %d/%d\n",result1 ,result2); 
    
    return 0;
}