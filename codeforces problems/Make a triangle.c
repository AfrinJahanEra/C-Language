#include<stdio.h>
int main(){
int a[3];
for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
}
for (int i = 0; i < 2; i++) {
    for (int j = i + 1; j < 3; j++) {
        if (a[i] > a[j]) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
int count=0;
for(int j=0;;j++){
    if((a[0]+a[1])>a[2]){
        printf("%d",count);
        break;
    }
    else{
        a[1]=a[1]+1;
        count++;
    }
}
return 0;
}   