#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
