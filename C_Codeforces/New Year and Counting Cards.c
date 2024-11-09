#include<stdio.h>

int main() {
    char s[50];
    scanf("%s", s);
    int i;
    int count = 0;
    
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' ||
           s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}
