#include<stdio.h>

int main(){
    double sum=0 ,a;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a);
        if(a==0 || a<0){
            break;
        }
        else{
            sum=sum+a;
        }
    }
    printf("%lf",sum);
    return 0;
}