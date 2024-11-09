#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    if(a%2!=0){
        printf("%d\n",a/2);
    }
    else{
        printf("%d\n",(a/2)-1);
    }
}
return 0;
}