#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int i,j;
char c[10];
for(i=0;i<t;i++){
for(j=0;j<10;j++){
    scanf(" %c",&c[j]);
}
int count=0;

if(c[0]!='c'){
    count++;
}
if(c[1]!='o'){
    count++;
}
if(c[2]!='d'){
    count++;
}
if(c[3]!='e'){
    count++;
}
if(c[4]!='f'){
    count++;
}
if(c[5]!='o'){
    count++;
}
if(c[6]!='r'){
    count++;
}
if(c[7]!='c'){
    count++;
}
if(c[8]!='e'){
    count++;
}
if(c[9]!='s'){
    count++;
}
printf("%d\n",count);
}
return 0;
}