#include<stdio.h>

int main(){
    long long n,k;
    scanf("%lld %lld",&n ,&k);

    if((n/k)%2==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}