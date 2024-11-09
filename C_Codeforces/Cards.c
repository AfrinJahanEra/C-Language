#include<stdio.h>
int main(){
int n,c;
scanf("%d",&n);
int a[n];
int i,j,b,sum=0;
c=n/2;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if((a[i]+a[j]==(sum/c)) && (i!=j)){
        printf("%d %d\n",i+1,j+1);
        a[i]=0;
        a[j]=0;
        }
    }
}
return 0;
}