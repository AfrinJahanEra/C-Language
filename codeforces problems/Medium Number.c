#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[j]);
    }
    for(int j=0;j<2;j++){
        for(int k=1;k<3;k++){
            if(a[k]<a[j]){
                int temp;
                temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d\n",a[1]);
}
return 0;
}