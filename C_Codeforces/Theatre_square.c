#include<stdio.h>

int main (){
    long long int m, n, a ,x, y;
    scanf("%lld %lld %lld", &m, &n ,&a);

    x= m/a + (m % a !=0);
     y= n/a + (n % a !=0);


    printf("%lld\n", x*y);
    return 0;


}