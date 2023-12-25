#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
      int n;
      scanf("%d",&n);
      int rem=n%10;
      int digit=0;
      int sum=0;
      for(int j=1;j<=rem;j++){
        if(j==rem){
          while(n){
            n=n/10;
            digit++;
          }
          for(int l=1;l<=digit;l++){
            sum=sum+l;
          }
        }
        else{
          sum=sum+10;
        }
      }
      printf("%d\n",sum);
    }
}