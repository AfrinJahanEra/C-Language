#include<stdio.h>

int main (){
    int n,i,p,q,a=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&p,&q);
        if(q-p>=2)
        a++;
    }
    printf("%d",a);
    return 0;
}