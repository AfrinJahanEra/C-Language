#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
int a,b,c;
for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c){
        printf("+\n");
    }
    else{
        printf("-\n");
    }
}
return 0;
}