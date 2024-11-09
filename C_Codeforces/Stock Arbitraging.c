#include <stdio.h>

int main() {
    int n, m, r;
    scanf("%d %d %d", &n, &m, &r);
    int i;
    int a[2000], b[2000];
    int min = 1013, max = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min)
            min = a[i];
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        if (b[i] > max)
            max = b[i];
    }
    int share, rem, bourles, total;
    if (max > min) {
        share = r / min;
        rem = r % min;
        bourles = share * max;
        total = bourles + rem;
        printf("%d", total);
    } else {
        printf("%d", r);
    }
    return 0;
}
