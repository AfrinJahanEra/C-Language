#include <stdio.h>

int main() {
    long long int t, a, b, temp, c, r, x, y, max, min, z;
    scanf("%lld", &t);
    int count;
    for (int i = 0; i < t; ++i) {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &r);

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        x = (c - r > a) ? c - r : a;
        y = (c + r < b) ? c + r : b;

        if (x > a) {
            max = x;
        } 
        else {
            max = a;
        }

        if (y < b) {
            min = y;
        } 
        else {
            min = b;
        }

        z = min - max;

        if (z > 0) {
            max = z;
        } 
        else {
            max = 0;
        }

        count = b - a - max;

        printf("%d\n", count);
    }

    return 0;
}
