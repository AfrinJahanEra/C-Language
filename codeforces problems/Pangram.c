#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1]; 
    scanf("%s", s);

    int flag = 0;
    
    for (char i = 'a'; i <= 'z'; i++) {
        int j;
        for (j = 0; s[j] != '\0'; j++) {
            if (s[j] == i || s[j] == i - 'a' + 'A') {
                flag = 1;
                break;
            }
        }
        if (j == n) {  
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("YES");
    } 
    else {
        printf("NO");
    }

    return 0;
}
