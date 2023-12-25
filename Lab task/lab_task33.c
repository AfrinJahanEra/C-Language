#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int exponentiate(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num1, num2;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter a choice: ");
    scanf(" %c", &choice);

    int result;
    switch (choice) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '^':
            result = exponentiate(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Result of the operation: %d\n", result);

    return 0;
}
