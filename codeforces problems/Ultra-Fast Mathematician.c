#include<stdio.h>
int main() {
    char s1[101];
    char s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0')) {
            printf("1");
        }
        else {
            printf("0");
        }
    }

    return 0;
}
