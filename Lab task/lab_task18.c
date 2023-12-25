#include<stdio.h>

int main(){
    int m,n;

    printf("Enter two integers:");
    scanf("%d %d",&n , &m);

    if(n !=0){
        printf("greatest common divisor :%d", m%n);
    }

    return 0;
}