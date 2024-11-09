#include<stdio.h>

int main (){
    double n=0.0,total=0.0;
    char c;

    printf("Enter an expression:");
    scanf("%lf",&total);

    while((c=getchar()) != '\n'){
        switch (c){
            case '+':
            scanf("%lf",&n);
            total+= n ;
            break ;

            case '-':
            scanf("%lf",&n);
            total-= n ;
            break ;

            case '*':
            scanf("%lf",&n);
            total*= n ;
            break ;

            case '/':
            scanf("%lf",&n);
            total/= n ;
            break ;

            default :
            break;
        }
    }
    printf("value of expression:%f\n",total);
return 0;
}
