#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int i,h,m;
for(i=0;i<t;i++){
    scanf("%d %d",&h,&m);
    h=23-h;
    m=60-m;
    printf("%d\n",h*60+m);
}
return 0;
}