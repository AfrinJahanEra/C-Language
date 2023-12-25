#include<stdio.h>
int main(){
int n,k;
scanf("%d %d",&n,&k);
int count=0;
int m=0;
for(int i=1;i<=n;i++){
    m=m+(5*i);
    if(m<=(240-k)){
        count++;
    }
    else{
        printf("%d",count);
        return 0;
    }
}
printf("%d",count);
return 0;
}