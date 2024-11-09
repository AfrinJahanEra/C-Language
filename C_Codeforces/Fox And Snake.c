#include<stdio.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);
int i,j;
int a=0;
for(i=0;i<n;i++){
    if(i==0 || i%2 ==0){
        for(j=0;j<m;j++){
            printf("#");
        }
    }
    else if(i%2 !=0){
        for(int k=a;k<n/2;k++){
            if(k==0 || k%2 == 0){
                for(j=0;j<m-1;j++){
                    printf(".");
                }
            printf("#");
            }
            else{
                printf("#");
                for(j=0;j<m-1;j++){
                    printf(".");
                }
            } 
            a=k+1;
            break;   
        }
    }
    printf("\n");
}
return 0;
}