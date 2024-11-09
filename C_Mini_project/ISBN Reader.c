#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("===================================\n");
    printf("          I S B N   R E A D E R   \n");
    printf("===================================\n\n");

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

    printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", a, b, c, d, e);

    return 0;
}
