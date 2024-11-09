#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j,a,b;
for(i=0;i<n;i++){
    scanf("%d",&a);
    int sum1=0;
    for(j=0;j<3;j++){
        b=a%10;
        a=a/10;
        sum1=sum1+b;
    }
    int sum2=0;
    for(j=0;j<3;j++){
        b=a%10;
        a=a/10;
        sum2=sum2+b;
    }
    if(sum1==sum2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}