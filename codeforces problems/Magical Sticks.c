#include<stdio.h>
int main(){
int n,m;
scanf("%d",&n);
while(n--){
    scanf("%d",&m);
    if(m%2==0){
        printf("%d\n",m/2);
    }
    else{
        printf("%d\n",(m/2)+1);
    }
}
return 0;
}