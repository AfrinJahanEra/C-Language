#include <stdio.h>

int main(){
    int m,n;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&m ,&n);
    if (m==0){
        printf("Equivalent 12-hour time:%.02d:%.02d AM",12 ,n);
    }
    else if (m<=12 && m>0){
        printf("Equivalent 12-hour time:%.02d:%.02d AM",m ,n);
    }
    else if (m==24){
        printf("Equivalent 12-hour time:%.02d:%.02d PM",m/2 ,n);
    }
    
    else if (m>12 && m<24){
        printf("Equivalent 12-hour time:%.02d:%.02d PM",(m%12) ,n);
    }
    return 0;
} 