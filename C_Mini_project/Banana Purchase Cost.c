#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*        Banana Purchase Cost           *\n");
    printf("*****************************************\n");

    int k, n, w;
    printf("Enter cost per banana, initial amount, and number of bananas: ");
    scanf("%d %d %d", &k, &n, &w);

    int sum = ((w * (w + 1)) / 2) * k;
    if (sum - n < 0) printf("Amount needed: 0\n");
    else printf("Amount needed: %d\n", sum - n);

    return 0;
}
