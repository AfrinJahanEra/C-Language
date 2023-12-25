#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    scanf("%s", s);
    char ch;
    int i;
    
    for (i = 0; s[i] != '\0'; i++) {
        ch = s[i];
        s[i] = tolower(ch);

        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'y' || s[i] == 'u')) {
            printf(".%c", s[i]);
        }
    }

    return 0;
}
