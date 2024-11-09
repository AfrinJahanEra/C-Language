#include<stdio.h>
int main(){
long long int a,b,c,d;
scanf("%lld",&a);
b=a/10;
c=a%10;
d=(b/10)*10+c;
if(a<b || a<d){
    if(b>=d){
        printf("%lld",b);
    }
    else if(d>=b){
        printf("%lld",d);
    }
    
}
else{
    printf("%lld",a);
}
return 0;
}