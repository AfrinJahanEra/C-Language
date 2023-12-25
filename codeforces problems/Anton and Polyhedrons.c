#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);
    char s[12];
    long int count = 0;

    for (long int i = 0; i < n; i++) {
        scanf("%s", s);
        if (s[0] == 'T') {
            count = count + 4;
        } 
        else if (s[0] == 'C') {
            count = count + 6;
        } 
        else if (s[0] == 'O') {
            count = count + 8;
        } 
        else if (s[0] == 'D') {
            count = count + 12;
        } 
        else {
            count = count + 20;
        }
    }
    printf("%ld", count);
    return 0;
}
