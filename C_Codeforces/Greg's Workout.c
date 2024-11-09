#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a;
int i,chest=0,biceps=0,back=0;
for(i=1;i<=n;i++){
    scanf("%d",&a);
    if(i==1 || (i%3==1)){
        chest=chest+a;
    }
    else if(i==2 || (i%3==2)){
        biceps=biceps+a;
    }
    else{
        back=back+a;
    }
}
if(chest>biceps && chest>back){
    printf("chest");
}
else if(biceps>chest && biceps>back){
    printf("biceps");
}
else{
    printf("back");
}
return 0;
}