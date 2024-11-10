// sum_with_break.c
#include <stdio.h>

int main() {
    printf("=============================\n");
    printf("   POSITIVE SUM CALCULATOR   \n");
    printf("=============================\n\n");

    double sum = 0, a;
    int i, n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &a);
        if (a <= 0) {
            break;
        }
        sum += a;
    }
    printf("Sum of positive values: %lf\n", sum);
    return 0;
}
