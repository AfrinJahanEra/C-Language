#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int j;
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[j]<a[i]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}