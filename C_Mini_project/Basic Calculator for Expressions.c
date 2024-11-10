// basic_calculator.c
#include <stdio.h>

int main() {
    printf("=========================\n");
    printf("    BASIC CALCULATOR     \n");
    printf("=========================\n\n");

    double n = 0.0, total = 0.0;
    char c;

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((c = getchar()) != '\n') {
        switch (c) {
            case '+':
                scanf("%lf", &n);
                total += n;
                break;
            case '-':
                scanf("%lf", &n);
                total -= n;
                break;
            case '*':
                scanf("%lf", &n);
                total *= n;
                break;
            case '/':
                scanf("%lf", &n);
                total /= n;
                break;
            default:
                break;
        }
    }
    printf("Result: %f\n", total);
    return 0;
}
