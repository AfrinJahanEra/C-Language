#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[101];
        scanf("%s", s);    
        int m = strlen(s);
        int flag = 1; 
        if (m % 2 != 0) {
            printf("NO\n");
            continue;
        }
        for (int j = 0; j < m / 2; j++) {
            if (s[j] != s[(m / 2) + j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("YES\n");
        } 
        else {
            printf("NO\n");
        }
    }
    return 0;
}
