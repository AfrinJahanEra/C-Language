#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    int min_index=0;
    int max_index=0;

    for (int i = 1; i < n; i++) {
        if (min >= a[i]) {
            min = a[i];
            min_index=i;
        }
        if (max < a[i]) {
            max = a[i];
            max_index=i;
        }
    }
    int flag=0;
    int count = 0;
    for (int i = min_index; min != a[n-1]; i++) {
        
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                count++;
                if(i+1 == max_index){
                    flag=1;
                }
    }
    int m=max_index-flag;
    printf("%d", count+m);
    return 0;
}