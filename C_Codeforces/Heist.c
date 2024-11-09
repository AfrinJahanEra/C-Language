#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long int i, j;
    long int a[n];
    for (i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    
    long int count=0;
    for(i=0;i<n-1;i++){
        if((a[i+1]-a[i]!=1)){
            count=count+a[i+1]-a[i]-1;
        }
    }


    printf("%ld\n", count);

    return 0;
}
