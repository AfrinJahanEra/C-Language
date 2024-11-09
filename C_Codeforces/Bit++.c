#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[4];

    int x = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (s[0] == '+' || s[1] == '+') {
            x++;
        } else if (s[0] == '-' || s[1] == '-') {
            x--;
        }
    }

    printf("%d", x);
    return 0;
}
