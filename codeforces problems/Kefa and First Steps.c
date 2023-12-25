#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count1=0,count2=0;
    for (i = 0; i < n-1 ; i++) {
        if (a[i] <= a[i+1]) {
            count1++;
        } 
        else {
            count1 = 0;
        }
        if (count1 > count2) {
            count2 = count1;
        }
    }
    printf("%d\n", count2+1);
    return 0;
}
