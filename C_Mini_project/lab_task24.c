#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    char c,d;
    printf("Enter a 12-hour time:");
    scanf("%d:%d %c%c",&a,&b,&c,&d);
    if(c==112){
        printf("Equivalent 24-hour time:%d:%d",(a+12),b);
    }
    else if(a==12){
        printf("Equivalent 24-hour time:00:%d",b);
    }
    else if(c==97){
        printf("Equivalent 24-hour time:%d:%d",a,b);
    }

    return 0;
}