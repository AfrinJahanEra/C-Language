#include <stdio.h>

int main() {
    int a, b, c;

    printf("====================================================\n");
    printf("      S W A P   T E M P   V A R I A B L E\n");
    printf("====================================================\n\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}
