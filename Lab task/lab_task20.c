#include <stdio.h>

int main() {

    int i, n, d;
    float e;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (i = 1, d = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (d *= i);
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}