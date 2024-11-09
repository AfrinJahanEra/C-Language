#include<stdio.h>
int main(){
    char s[200];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='W'&& s[i+1]=='U'&& s[i+2]=='B'){
            i+=2;
            printf(" ");
        }
        else{
        printf("%c",s[i]);
        }
    }
    return 0;
}
