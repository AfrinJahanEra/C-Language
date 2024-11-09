#include<stdio.h>
int main(){
int i,m,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
   scanf("%d",&m);
   if(m==1){
      printf("HARD");
      return 0;
   }  
}  
   printf("EASY");
return 0;
}