#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
int i,j;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i = 0; i < n-1 ; i++){
    for(j = i+1 ; j < n ; j++){
        if(a[j]<a[i]){
            int temp =a[j];
            a[j]= a[i];
            a[i]=temp;
        }
    }
}
int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            count++;
            for (int j = i + 1; j < n; j++) { 
                if (a[j] % a[i] == 0) {
                    a[j] = -1;
                }
            }
            a[i] = -1;
        }
    }
 
printf("%d",count);
return 0;
}