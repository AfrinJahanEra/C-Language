#include<stdio.h>
int main(){
int i=1;
double d=2.5;
char c='a';
char *ptr1=&c;
int *ptr2=&i;
double *ptr3=&d;
printf("The address of char c is 0x%c\n",&c);
printf("The address of int i is 0x%d\n",&i);
printf("The address of double is 0x%lf\n",&d);
printf("The address of char *c is 0x%c\n",ptr1);
printf("The address of int *i is 0x%d\n",ptr2);
printf("The address of double *is 0x%lf\n",ptr3);
printf("The value of char c is %c\n",c);
printf("The value of int i is %d\n",i);
printf("The value of double is %lf\n",d);
printf("The value of char *c is %d\n",ptr1);
printf("The value of int *i is %d\n",ptr2);
printf("The value of of *double is %d\n",ptr2);
printf("The size of char c is %c\n",sizeof(char));
printf("The size of int i is %d\n",sizeof(int));
printf("The size of double is %lf\n",sizeof(double));
printf("The size of char *c is %c\n",sizeof(ptr1));
printf("The size of int *i is %d\n",sizeof(ptr2));
printf("The size of double *d is %lf\n",sizeof(ptr3));


return 0;
}
