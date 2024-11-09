#include<stdio.h>
#define N 3
int main(){
int i,j,t;    
int a[N];
for(i=0;i<N;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
        if(a[j]<a[i]){
        t=a[j];
        a[j]=a[i];
        a[i]=t;
        }
    }
}

int sum=0;
for(i=0;i<N-1;i++){
    sum = sum + (a[i+1]-a[i]);
}
printf("%d",sum);

return 0;
}