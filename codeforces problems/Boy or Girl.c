#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int i, j;
    int n = strlen(s);
    int count = n;

    for (i = 0; i < n - 1; i++) {
        int flag = 0;  

        for (j = i + 1; s[j] != '\0'; j++) {
            if (s[i] == s[j]) {
                flag = 1;  
            }
        }

        if (flag) {
            count--;  
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}
