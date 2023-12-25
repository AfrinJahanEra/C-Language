#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int m,n,x,p;

while(t--){
    scanf("%d %d",&n,&x);
    if(n<=2){
        printf("1\n");
    }
    else {
        p=n-2;
        if(p%x==0){
            m=p/x ;
            printf("%d\n",m+1);
        }
        else{
            m=p/x+1;
            printf("%d\n",m+1);
        }
     
    }
}
return 0;
} 