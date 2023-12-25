#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        long long int a, b, n;
        scanf("%lld %lld %lld", &a,&b,&n);
        int count = 0;
        while (a <= n && b <= n) {
            if (a >= b) {
                b += a;
            } 
            else {
                a += b;
            }
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
