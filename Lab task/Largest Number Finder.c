#include <stdio.h>

int main() {
    printf("*****************************************\n");
    printf("*          Largest Number Finder        *\n");
    printf("*****************************************\n");

    float largest = 0.0f, a;
    do {
        printf("Enter a number: ");
        scanf("%f", &a);

        if (a > largest) largest = a;
    } while (a > 0);

    printf("The largest number entered was %.2f\n", largest);
    return 0;
}
