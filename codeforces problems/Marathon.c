#include <stdio.h>

int main(){

    long t; 
    scanf("%ld", &t);
    long a, b, c, d; 
    while(t--){
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        printf("%d\n", (b > a) + (c > a) + (d > a));
    }

}