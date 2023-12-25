#include<stdio.h>

int main(){
    int a, b, c, d, e ;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

    printf(" GS1 prefix:%d \n Group Identifier:%d \n Publisher code:%d \n Item number:%d \n Check digit:%d \n", a,b,c,d,e);

    return 0;

}