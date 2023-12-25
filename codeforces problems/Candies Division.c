#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int rem, a, max;
        rem = n % k;
        a = n - rem;
        max = (k / 2) ;

        int sum = 0;
        if (rem > max) {
            sum = a + max;
        } else {
            sum = a + rem;
        }

        printf("%d\n", sum);
    }

    return 0;
}