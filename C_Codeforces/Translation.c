#include <stdio.h>
#include <string.h>
int main() {
    char s1[101];
    scanf("%s", s1);
    char s2[101];
    scanf("%s", s2);
    int n = strlen(s1);
    for (int i = 0, j = n-1; i<n; i++, j--) {
        if (s1[i] != s2[j]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}