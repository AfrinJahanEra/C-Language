#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*          Fraction Simplifier          *\n");
    printf("*****************************************\n");

    int n, d, a, b, r;
    printf("Enter a fraction (numerator/denominator): ");
    scanf("%d/%d", &n, &d);

    a = n;
    b = d;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("In lowest terms: %d/%d\n", n / a, d / a);
    return 0;
}
