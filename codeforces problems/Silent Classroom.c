#include<stdio.h>
int main ()
{
int  n;
scanf("%d",&n);
int a[26]={0};
char s[30];
int i,x,y;
for(i=0;i<n;i++){
    scanf("%s",s);
    a[s[0]-'a']++;
}
int count=0;
for(i=0;i<26;i++){
    x=a[i]/2;
    y=a[i]-x;
    count = count + (x*(x-1))/2+(y*(y-1))/2;
}
printf("%d",count);
return 0;
}