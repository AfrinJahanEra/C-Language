#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char s[n][m];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    int a[m];
    int count[m];

    for (j = 0; j < m; j++) {
        scanf("%d", &a[j]);
    }

    for (j = 0; j < m; j++) {
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
        for (i = 0; i < n; i++) {
            if (s[i][j] == 'A') {
                count1++;
            } else if (s[i][j] == 'B') {
                count2++;
            } else if (s[i][j] == 'C') {
                count3++;
            } else if (s[i][j] == 'D') {
                count4++;
            } else if (s[i][j] == 'E') {
                count5++;
            }
        }

        int c[5] = {count1, count2, count3, count4, count5};

        for (int k = 0; k < 4; k++) {
            for (int l = k + 1; l < 5; l++) {
                if (c[l] < c[k]) {
                    int temp = c[l];
                    c[l] = c[k];
                    c[k] = temp;
                }
            }
        }

        count[j] = a[j] * c[4];
    }

    int sum = 0;
    for (i = 0; i < m; i++) {
        sum = sum + count[i];
    }

    printf("%d", sum);

    return 0;
}
