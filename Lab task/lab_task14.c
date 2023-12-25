#include <stdio.h>

int main (){
    int m1, d1,y1 ,m2 ,d2, y2, a, b, c ;
    printf("Enter first date(mm/dd/yy):");
    scanf("%d/%d/%d",&m1 ,&d1 ,&y1);

    printf("Enter second date(mm/dd/yy):");
    scanf("%d/%d/%d",&m2 ,&d2, &y2);

    a=y1-y2;
    b=m1-m2;
    c=d1-d2;

    if(a>0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m2,d2,y2,m1,d1,y1);
    }
    else if(a<0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }
    else if(a==0 && b>0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m2,d2,y2,m1,d1,y1);
    }
    else if(a==0 && b<0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }
    else if(a==0 && b==0 && c>0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m2,d2,y2,m1,d1,y1);
    }
    else if(a==0 && b==0 && c<0){
        printf("%d/%d/%d is earlier than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }

    return 0;
}