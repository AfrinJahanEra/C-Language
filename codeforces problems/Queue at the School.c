#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char s[51];
    scanf("%s", s);
    getchar();
    for (int j = 0; j < t; j++) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }
    }

    printf("%s", s);
    return 0;
}
