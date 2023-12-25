#include <stdio.h>

int main(){
   int k,n,w;
   scanf("%d %d %d",&k, &n, &w);


   int sum=((w*(w+1))/2)*k;
   
   if(sum-n <0){
    printf("0");
   }
   else{
    printf("%d",sum-n);
   }
   
   return 0;
}