#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if (n==1){
    printf("1");
}
else{
    int ans;
    ans=(n*n)+((n-1)*(n-1));
    printf("%d",ans);
}
return 0;
}