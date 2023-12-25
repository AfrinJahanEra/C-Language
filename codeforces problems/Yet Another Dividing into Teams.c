#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        // Sorting the array in ascending order
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[j] > a[k]) {
                    int temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                }
            }
        }

        int team = 1;
        for (int j = 0; j < n - 1; j++) {
            if ((a[j + 1] - a[j]) == 1) {
                team = 2;
            }
        }

        printf("%d\n", team);
    }

    return 0;
}
