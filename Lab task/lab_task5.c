#include<stdio.h>

int main(){
    int p1 ,p2;
    scanf("%d %d",&p1, &p2);

    if(p1==0 && p2==1){
        printf(" player 2 wins the game !");
    }
    else if(p1==1 && p2==0){
        printf(" player 1 wins the game !");
    }
    else if(p1==1 && p2==2){
        printf(" player 2 wins the game !");
    }
    else if(p1==2 && p2==1){
        printf(" player 1 wins the game !");
    }
    else if(p1==0 && p2==2){
        printf(" player 1 wins the game !");
    }
    else if(p1==2 && p2==1){
        printf(" player 2 wins the game !");
    }
    else if(p1==p1){
        printf("draw");
    }
    return 0;
}