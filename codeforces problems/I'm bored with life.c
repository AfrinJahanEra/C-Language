#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int fact_a = 1;
    long long int fact_b = 1;
    if(a<=b){
        for (int i = 2; i <= a; i++) {
            fact_a *= i;
        }
    printf("%lld\n",fact_a);
    }
    
    if(b<a){
        for (int i = 2; i <= b; i++) {
            fact_b *= i;
        }
    printf("%lld\n",fact_b);
    }

    return 0;
}
