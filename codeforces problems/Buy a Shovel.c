#include<stdio.h>
int main(){
int k,r;
scanf("%d %d",&k,&r);
int rem1;
int count=0;
for(int i=1;;i++){
    int m=k*i;
    int rem1=m%10;
    if(rem1==0){
        count++;
        printf("%d",count);
        return 0;
    }
    else{
        if(rem1==r){
            count++;
            printf("%d",count);
            return 0;
        }
        else{
            count++;
        }
    }
}
return 0;
}