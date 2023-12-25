#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int k;
        scanf("%d", &k);
        int i = 1;
        int count = 0;
        while (count < k) {
            if (i % 3 != 0 && i % 10 != 3) {
                count++;
            }
            i++;
        }
        printf("%d\n", i - 1);
    }
    return 0;
}
