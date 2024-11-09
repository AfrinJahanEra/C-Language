#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char result[101];
        for (int i = 0; i < n; i++) {
            result[i] = 'a' + (i % k); 
        }

        result[n] = '\0';

        printf("%s\n", result);
    }

    return 0; 
}
