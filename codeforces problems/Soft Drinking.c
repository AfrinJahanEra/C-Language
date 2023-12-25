#include<stdio.h>
int main(){
int n,k,l,c,d,p,nl,np;
scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
int i,j,m,min;
i=((k*l)/nl);
j=(c*d);
m=(p/np);
if(i<=j){
   if(i<=m){
      min=i;
   }
   else{
      min=m;
   }
}   
if(j<=i){
   if(j<=m){
      min=j;
   }
   else{
      min=m;
   }
}   
printf("%d",min/n);
return 0;
}