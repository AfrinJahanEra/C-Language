#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int i,n,f,j,temp;
while(t--){
    scanf("%d",&n);
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
    f=0;
    for(i=0;i<n-1;i++){
        if((a[i+1]-a[i])>1){
        f=1;
        break;
        }
    }
    if(f==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
return 0;
}   