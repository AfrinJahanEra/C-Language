// population_growth.c
#include <stdio.h>

int main() {
    printf("===========================\n");
    printf("  POPULATION GROWTH SIMULATION  \n");
    printf("===========================\n\n");

    int a, b, i;
    printf("Enter initial populations of species A and B: ");
    scanf("%d %d", &a, &b);

    for (i = 1;; i++) {
        a *= 3;
        b *= 2;

        if (a > b) {
            break;
        }
    }
    printf("Years until species A surpasses species B: %d\n", i);
    return 0;
}
