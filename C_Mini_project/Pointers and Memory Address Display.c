#include<stdio.h>

int main(){
    int i = 1;
    double d = 2.5;
    char c = 'a';
    char *ptr1 = &c;
    int *ptr2 = &i;
    double *ptr3 = &d;

    printf("Address of char c: %p\n", &c);
    printf("Address of int i: %p\n", &i);
    printf("Address of double d: %p\n", &d);
    printf("Address of char *c: %p\n", ptr1);
    printf("Address of int *i: %p\n", ptr2);
    printf("Address of double *d: %p\n", ptr3);
    printf("Value of char c: %c\n", c);
    printf("Value of int i: %d\n", i);
    printf("Value of double d: %lf\n", d);
    printf("Size of char c: %lu\n", sizeof(char));
    printf("Size of int i: %lu\n", sizeof(int));
    printf("Size of double d: %lu\n", sizeof(double));

    return 0;
}
