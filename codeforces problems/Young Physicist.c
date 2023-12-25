#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],b[n],c[n];
int i,sum1=0,sum2=0,sum3=0;
for(i=0;i<n;i++){
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
}
for(i=0;i<n;i++){
    sum1=sum1+a[i];
}
for(i=0;i<n;i++){
    sum2=sum2+b[i];
}
for(i=0;i<n;i++){
    sum3=sum3+a[i];
}
if(sum1==0 && sum2==0 && sum3==0){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}