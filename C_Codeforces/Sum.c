#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int i, j,k;
int x[t],y[t],z[t];
for(i=0;i<t;i++){
    scanf("%d %d %d",&x[i],&y[i],&z[i]);
}
for(i=0;i<t;i++){
    if(x[i]==y[i]+z[i] || y[i]==x[i]+z[i] || z[i]==x[i]+y[i]){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}