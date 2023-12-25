#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j,temp;
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[j]<a[i]){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        }
    }
}

int count=0;
for(i=0;i<n-1;i++){
    count=count+(a[n-1]-a[i]);
}
printf("%d",count);
return 0;
}