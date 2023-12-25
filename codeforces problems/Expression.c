#include <stdio.h>

int main() {
    int a, b, c, x, y, m, n,z, max1,max2;
    scanf("%d %d %d", &a, &b, &c);

    x = a +( b * c );
    y = a * (b + c);
    m = a * b * c;
    z = (a+b)*c;
    n=a+b+c;

   (x>y)? (max1=x,max2=y) : (max1=y,max2=x);
   if(max1 < m){
   
    max1 = m ;
   }
   
   if(max1 < z){
    
    max1 = z ;
   }
   if(max1 < n){
    max1 = n;
   }
   
    printf("%d\n", max1);
    return 0;
}