#include<stdio.h>
int main(){
int i,n,m,a;
scanf("%d %d",&n,&m);
a=n*m;
char ch;
int count=0;
for(i=0;i<=a;i++){
    scanf("%s",&ch);

    if(ch==67 || ch==77 || ch==89){
    count++;
    }
}
if(count>0){
    printf("#Color");
}
else{
    printf("#Black&White");
}

return 0;
}
