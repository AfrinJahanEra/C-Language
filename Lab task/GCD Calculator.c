#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*          Greatest Common Divisor      *\n");
    printf("*****************************************\n");

    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    if (n != 0) printf("Greatest common divisor: %d\n", m % n);
    return 0;
}
