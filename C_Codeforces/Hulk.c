#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
for(i=1;i<=n;i++){
    for(i=1;i<n;i++){
        if(n==1 || i%2 !=0){
            printf("I hate that ");
        }
        else if(i%2 == 0){
            printf("I love that ");
        }
    }
    if(i==1 || i==n && i%2!=0){
        printf("I hate it");
    }
    else if (i==2 || i==n && i%2 ==0){
        printf("I love it");
    }
    }
return 0;
}