#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
char s[n];
scanf("%s",&s);
int count=0;
int i;
for(i=0;i<n;i++){
    if(s[i]=='8'){
        count++;
    }
}
if(count >= n/11){
    printf("%d",n/11);
}
else if(count < n/11 && n>11){
    printf("%d",count);
}
else{
    printf("0");
}

return 0;
}