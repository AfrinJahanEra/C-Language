#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],b[n];
int i,j;
for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
}
int count=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==b[j]){
            count++;
        }
    }
}
printf("%d",count);
return 0;
}