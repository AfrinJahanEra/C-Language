#include<stdio.h>

int main() {
    char a[200], b[200];
    scanf("%s", a);
    scanf("%s", b);
    
    int length1 = 0, length2 = 0;
    while(a[length1] != '\0') length1++;
    while(b[length2] != '\0') length2++;

    printf("%d %d\n", length1, length2);
    printf("%s%s\n", a, b);
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);
    
    return 0;
}
