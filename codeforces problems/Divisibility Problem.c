#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i;
while(n--){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("0\n");
    }
    else{
        int c=a%b;
        printf("%d\n",b-c);
    }
}
return 0;
}