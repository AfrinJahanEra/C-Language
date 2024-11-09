#include<stdio.h>
#include<ctype.h>
int main(){
    char s[10000];
    scanf("%s",s);
    char c=s[0];
    s[0]=toupper(c);
    printf("%s",s);
return 0;
}