#include<stdio.h>
int main(){
char a[200];
char b[200];
scanf("%s",&a);
scanf("%s",&b);
int i,length1=0;
for(i=0;a[i]!='\0';i++){
    length1++;
}
int length2=0;
for(i=0;b[i]!='\0';i++){
    length2++;
}
printf("%d %d\n",length1,length2);
printf("%s%s\n",a,b);
char temp;
temp=a[0];
a[0]=b[0];
b[0]=temp;
printf("%s %s",a,b);
return 0;
}
