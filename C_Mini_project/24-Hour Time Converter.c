#include <stdio.h>

int main() {
    int m, n;

    printf("===================================\n");
    printf("    2 4 - T I M E   C O N V E R T E R\n");
    printf("===================================\n\n");

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &m, &n);

    if (m == 0)
        printf("Equivalent 12-hour time: 12:%.02d AM\n", n);
    else if (m <= 12)
        printf("Equivalent 12-hour time: %.02d:%.02d AM\n", m, n);
    else
        printf("Equivalent 12-hour time: %.02d:%.02d PM\n", m % 12, n);

    return 0;
}
