#include <stdio.h>

int main() {
    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a >= x) {
        a = a - x;
        if ((a + b) >= y) {
            b = (a + b) - y;
            if ((b + c) >= z) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }

    return 0;
}