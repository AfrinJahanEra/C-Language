#include<stdio.h>

int main() {
    int s, n;
    scanf("%d %d", &s, &n);
    int a[n], b[n];
    int i;
    int count = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    int j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                
                int temp1 = a[i];
                a[i] = a[j];
                a[j] = temp1;

                int temp2 = b[i];
                b[i] = b[j];
                b[j] = temp2;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] < s) {
            s = s + b[i];
            count++;
        }
    }

    if (count == n) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
