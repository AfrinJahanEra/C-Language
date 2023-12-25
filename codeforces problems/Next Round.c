#include<stdio.h>
int main(){
int n,k;
scanf("%d %d",&n ,&k);
int a[n];
int i,j;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int count=0;
for(i=0;i<n;i++){ 
    if(a[i]==0){
        break;
        printf("0");
    }
    else if(a[k-1]<=a[i] ){
        count++;
    }
}
printf("%d",count);

return 0;
}