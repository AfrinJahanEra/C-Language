#include<stdio.h>
int main(){

int i,j,t,count=0;
int a[4];
for(i=0;i<4;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
        if(a[j]<a[i]){
        t=a[j];
        a[j]=a[i];
        a[i]=t;
        }
    }
}
for(i=0;i<3;i++){
    if(a[i]==a[i+1]){
    count++;
    }
}
printf("%d",count);
return 0;
}