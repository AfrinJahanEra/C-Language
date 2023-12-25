#include<stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    char a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf(" %c", &a[i][j]);
        }
    }
    int count, sum = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[i][j] == 'C') {
                count += 1;
            }
        }
        sum += count * (count - 1) / 2;
    }
    for (j = 0; j < n; j++) {
        count = 0;
        for (i = 0; i < n; i++) {
            if (a[i][j] == 'C') {
                count += 1;
            }
        }
        sum += count * (count - 1) / 2;
    }
    printf("%d", sum);
    return 0;
}
