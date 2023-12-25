#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
char ch;
int i;
for(i=0;i<n;i++){
    scanf(" %c",&ch);
    if (ch=='c'||ch=='d'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='r'||ch=='s'){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}