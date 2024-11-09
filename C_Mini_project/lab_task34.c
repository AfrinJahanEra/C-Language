#include<stdio.h>
int gcd(int num1,int num2){
    if(num1==0 || num2==0){
        if(num1==0){
            return num2;
        }
        else if(num2==0){
            return num1;
        }
    }
    else{
        if(num1>num2){
            return gcd(num1%num2 , num2);
        }
        else if(num2 > num1){
            return gcd(num1, num2%num1);
        }
    }
    
}    
int main(){
int num1,num2;
scanf("%d %d",&num1,&num2);
printf("GCD of two number is %d",gcd(num1,num2));
return 0;
}