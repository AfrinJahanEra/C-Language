#include <stdio.h>

int main() {
    int a, b;

    printf("===================================\n");
    printf("     S W A P   W I T H O U T   T E M P\n");
    printf("===================================\n\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}
