#include<stdio.h>
int main(){
int dollar;
scanf("%d",&dollar);
int a=dollar/100;
int b=(dollar%100)/20;
int c=((dollar%100)%20)/10;
int d=(((dollar%100)%20)%10)/5;
int e=((((dollar%100)%20)%10)%5)/1;
printf("%d",a+b+c+d+e);
return 0;
}