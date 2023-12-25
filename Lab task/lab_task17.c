#include <stdio.h>

int main(){
    float largest= 0.0f ;
    float a;

    do{
        printf("Enter a number :");
        scanf("%f" , &a);

        if(a > largest){
            largest = a ;
        }
    }
    while ( a > 0);
    

    printf("\nThe largest number entered was %f\n" ,largest );

    return 0;


}