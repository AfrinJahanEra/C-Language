#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int x,i,police=0,crime=0;
for(i=0;i<n;i++){
    scanf("%d",&x);
    if(x>0){
        police+=x;
    }
    else{
        if(police<1){
            crime++;
        }
        else{
            police--;
        }
    }
}
printf("%d",crime);
return 0;
}