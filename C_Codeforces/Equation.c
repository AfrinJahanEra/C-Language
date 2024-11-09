#include<stdio.h>
int main(){
long long int n;

scanf("%lld",&n);
if (n==1){
    printf("%d %d",9 ,8);
}
else if (n!=1){
    printf("%lld %lld",n*9,n*8);
}
return 0;
}