#include<stdio.h>
int main(){
int n,a,b,c;
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>=10 || a+c>=10 || b+c>=10 ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
}
return 0;
}