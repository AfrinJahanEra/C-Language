// time_conversion.c
#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("   12-HOUR TO 24-HOUR CONVERTER  \n");
    printf("===============================\n\n");

    int a, b;
    char c, d;
    printf("Enter a 12-hour time (hh:mm AM/PM): ");
    scanf("%d:%d %c%c", &a, &b, &c, &d);

    if (c == 'P' || c == 'p') {
        printf("Equivalent 24-hour time: %02d:%02d\n", (a % 12) + 12, b);
    } else {
        printf("Equivalent 24-hour time: %02d:%02d\n", a % 12, b);
    }
    return 0;
}
