// road_width_calculation.c
#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("     ROAD WIDTH CALCULATION      \n");
    printf("=================================\n\n");

    int n, h, i, w = 0, t;
    printf("Enter number of vehicles and height threshold: ");
    scanf("%d %d", &n, &h);

    for (i = 0; i < n; i++) {
        printf("Enter vehicle height: ");
        scanf("%d", &t);
        if (t <= h) {
            w += 1;
        } else {
            w += 2;
        }
    }
    printf("Total road width required: %d\n", w);
    return 0;
}
