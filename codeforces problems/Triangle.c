#include <stdio.h>

int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int flag = 0;

    for (int k = 0; k < 2; k++) {
        for (int i = k + 1; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if ((a[k] + a[i] > a[j]) && (a[k] + a[j] > a[i]) && (a[i] + a[j] > a[k])) {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1) {
        printf("TRIANGLE");
    } else {
        for (int k = 0; k < 3; k++) {
            for (int i = k + 1; i < 4; i++) {
                if (a[k] + a[i] == a[i + 1]) {
                    printf("SEGMENT");
                    return 0; 
                }
            }
        }
        printf("IMPOSSIBLE");
    }

    return 0;
}
