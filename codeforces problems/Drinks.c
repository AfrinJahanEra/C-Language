#include<stdio.h>
int main(){
float n,i,value;

scanf("%f",&n);
float sum=0;
for(i=0;i<n;i++){ 
scanf("%f",&value);
sum+=value;
}
float avg;
avg= sum /n;
printf("%f",avg);

return 0;
}