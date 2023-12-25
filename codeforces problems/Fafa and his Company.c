#include<stdio.h>
int main(){
int n,l=0;
scanf("%d",&n);
int i,j,possible_group;
int count=0;
for(i=1;i<=n/2;i++){
    possible_group=n-i;
    if(!(possible_group%i)){
        l++;
    }
}
printf("%d",l);
return 0;
}