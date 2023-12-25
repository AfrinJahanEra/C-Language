#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int num = n / 2020;
        int rem = n % 2020;
        if (rem <= num) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
