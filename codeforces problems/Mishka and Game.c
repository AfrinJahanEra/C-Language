#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],b[n];
int i,count1=0,count2=0;
for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
    if(a[i]>b[i]){
        count1++;
    }
    else if(a[i]<b[i]){
        count2++;
    }
}
if(count1>count2){
    printf("Mishka");
}
else if(count1<count2){
    printf("Chris");
}
else{
    printf("Friendship is magic!^^");
}
return 0;
}