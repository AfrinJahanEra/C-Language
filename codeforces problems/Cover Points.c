#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count=0;
    int sum=0;
    int a,b;
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        sum = a + b;
        if (sum > count){
            count = sum;
        }
    }
    printf("%d", count);
    return 0;
}
