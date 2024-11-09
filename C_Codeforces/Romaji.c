#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int i, n;
    n = strlen(s);

    for (i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n') {
            if (i + 1 >= n || (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u')) {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
