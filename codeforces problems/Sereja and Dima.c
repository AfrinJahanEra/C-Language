#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left_most = 0, right_most = n - 1, sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[left_most] > a[right_most]) {
                sum1 = sum1 + a[left_most];
                left_most++;
            } else {
                sum1 = sum1 + a[right_most];
                right_most--;
            }
        } else {
            if (a[left_most] > a[right_most]) {
                sum2 = sum2 + a[left_most];
                left_most++;
            } else {
                sum2 = sum2 + a[right_most];
                right_most--;
            }
        }
    }

    printf("%d %d\n", sum1, sum2);
    return 0;
}
