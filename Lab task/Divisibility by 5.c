#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*         Divisibility by 5             *\n");
    printf("*****************************************\n");

    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x % 5 == 0) printf("Result: %d\n", x / 5);
    else printf("Result: %d\n", (x / 5) + 1);

    return 0;
}
