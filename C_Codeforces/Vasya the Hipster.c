#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
if(a>=b){
    c=a-b;
    printf("%d ",b);
    printf("%d",c/2);
}
else if (b>=a){
    c=b-a;
    printf("%d ",a);
    printf("%d",c/2);
}
return 0;
}