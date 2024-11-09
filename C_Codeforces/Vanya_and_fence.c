#include <stdio.h>

int main (){
    int n,h,i ,w=0 ,t;
    scanf("%d %d", &n , &h);
    
    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t<=h){
            w=w+1;
        }
        else{
            w=w+2;
        }
    }
    printf("%d",w);
    return 0;
}