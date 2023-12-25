#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
char a,b,c;
for(int i=0;i<n;i++){
    scanf(" %c%c%c",&a,&b,&c);
    if((a==121 ||a==89)  && (b==101 ||b==69) && (c==115 ||c==83)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}