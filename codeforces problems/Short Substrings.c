#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char b[101];
        char a[101];
        scanf("%s", b);
        int l = 0;
        int m = strlen(b);
        if (m == 1 || m == 2) {
            printf("%s\n", b);
        } 
        else {
            for (int j = 0; b[j] != '\0'; j++) {
                if (j % 2 == 0) {
                    a[l] = b[j];
                    l++;
                }
            }
            if (m % 2 == 0) {
                a[l] = b[m - 1];
                l++;
            }
            a[l] = '\0';
            printf("%s\n", a);
        }
    }

    return 0;
}
