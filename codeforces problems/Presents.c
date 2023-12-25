#include<stdio.h>
int main(){
int i,n,x;
scanf("%d",&n);
int a[n];
for(i=1;i<=n;i++){
    scanf("%d",&x);
    a[x]=i;
}

for(i=1;i<=n;i++){
    printf("%d ",a[i]);
}
return 0;
}