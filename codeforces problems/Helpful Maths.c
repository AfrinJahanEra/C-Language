#include<stdio.h>
#include<string.h>
int main(){
int i,j,length;
char s[100];
gets(s);
length=strlen(s);
for(i=0;i<length-1;i++){
    for(j=0;j<length-i-1;j++){
        if(s[j]!='+'){
            if(s[j]>s[j+2]){
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
}
puts(s);
return 0;
}