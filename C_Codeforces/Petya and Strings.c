#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
    char s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    char c1,c2;
    for (int i = 0; s1[i] != '\0'; i++) {
        c1=s1[i];
        c2=s2[i];
        s1[i] = tolower(c1);
        s2[i] = tolower(c2);
    }
    int n=strcmp(s1,s2);
    printf("%d",n);
    return 0;
}
