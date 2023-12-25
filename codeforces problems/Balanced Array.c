#include <stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);

    for (long long int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        if ((n / 2) % 2 != 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
            for (long long int j = 2; j <= n; j += 2) {
                printf("%lld ", j);
            }
            for (long long int j = 1; j < n - 2; j += 2) {
                printf("%lld ", j);
            }
            printf("%lld\n", n + (n / 2) - 1);
        }
    }

    return 0;
}
