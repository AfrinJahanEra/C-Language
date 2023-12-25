#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
int i,j;
char c[100];
for(j=0;j<t;j++){ 
    scanf("%s",&c);
    int length=strlen(c);
    if(length>10){
        printf("%c",c[0]);
        printf("%d",strlen(c)-2);
        printf("%c\n",c[length-1]);
    }
    else{
            printf("%s\n",c);
    }
    
    
}
return 0;
}