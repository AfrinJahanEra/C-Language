#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int i,j,k;
int n;
for(i=0;i<t;i++){
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    int temp;
    for(j=0;j<n-1;j++){
        for(k=1;k<n;k++){
            if(a[j]>a[k]){
                temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }
    int product=1;
    for(j=0;j<n;j++){
        a[0]=a[0]+1;
        product=product*a[j];
    }
    printf("%d\n",product);
}
return 0;
}