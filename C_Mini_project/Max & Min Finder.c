#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*         Max & Min Finder              *\n");
    printf("*****************************************\n");

    int a, b, c, d, max, min;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b) { max = a; min = b; }
    else { max = b; min = a; }
    if (c > max) max = c; else if (c < min) min = c;
    if (d > max) max = d; else if (d < min) min = d;

    printf("Largest: %d\nSmallest: %d\n\n", max, min);
    return 0;
}
