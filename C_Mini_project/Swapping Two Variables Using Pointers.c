#include<stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    printf("Enter values for x and y: ");
    scanf("%d %d", &x, &y);
    
    swap(&x, &y);
    
    printf("\nAfter swapping: x = %d, y = %d\n", x, y);
    return 0;
}
