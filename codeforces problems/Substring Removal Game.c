#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char s[101];
        scanf("%s", s);
        int n = strlen(s);
        int count = 0;
        int k = 0; 
        int a[n];
        for (int j = 0; s[j] != '\0'; j++) { 
            if (s[j] == '1') {
                count++;
                if (s[j + 1] == '0' || s[j + 1] == '\0') {
                    a[k] = count;
                    k++;
                    count = 0;
                }
            }
        }
        for (int j = 0; j < k; j++) { 
            for (int l = j + 1; l < k; l++) {
                if (a[l] > a[j]) {
                    int temp = a[l];
                    a[l] = a[j];
                    a[j] = temp;
                }
            }
        }
        int sum = 0;
        for (int j = 0; j < k; j++) {
            if (j % 2 == 0) {
                sum = sum + a[j];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}