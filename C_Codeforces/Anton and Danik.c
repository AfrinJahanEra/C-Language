#include<stdio.h>
int main(){
long int n;
scanf("%ld",&n);
char s[n];
scanf("%s",s);
int count1=0,count2=0;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        count1++;
    }
    else{
        count2++;
    }
}
if(count1>count2){
    printf("Anton");
}
else if(count1<count2){
    printf("Danik");
}
else{
    printf("Friendship");
}
return 0;
}