#include <stdio.h>

int main() {
    int a[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count1 , count2 ;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == 1) {
                if (i <= 2) {
                    count1 = 2 - i;
                } 
                else {
                    count1 = i - 2;
                }

                if (j <= 2) {
                    count2 = 2 - j;
                } 
                else {
                    count2 = j - 2;
                }
            }
        }
    }

    printf("%d", count1 + count2);
    return 0;
}
