#include<stdio.h>
#include<ctype.h>
int main(){
char s[100];
scanf("%s",s);
int count1=0,count2=0;
for(int i=0;s[i]!='\0';i++){
    if(s[i]>=97 && s[i]<=122){
        count1++;
    }
    else{
        count2++;
    }
}
char ch;
if(count1>=count2){
    for(int i=0;s[i]!='\0';i++){
        ch=s[i];
        s[i]=tolower(ch);
    }
}
else{
    for(int i=0;s[i]!='\0';i++){
        ch=s[i];
        s[i]=toupper(ch);
    }
}
printf("%s",s);
return 0;
}