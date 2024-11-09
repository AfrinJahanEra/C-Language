#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
char s[n];
scanf("%s",&s);
int count=0;
for(i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        count++;
    }
}
printf("%d",count);
return 0;
}