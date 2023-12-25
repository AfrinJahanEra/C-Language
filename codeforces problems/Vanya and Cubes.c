#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,m;
    int sum=0;
    for(i=1;n>0;i++){
        m=(i*(i+1))/2 ;
        sum=sum+m ;
        if(sum>n)
        break;
    }
printf("%d",i-1);
return 0;
}