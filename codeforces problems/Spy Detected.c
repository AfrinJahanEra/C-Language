#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        int index = 1;

        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[j - 1] && arr[j]!=arr[j+1]) {
                index = j + 1;
                break;
            }
        }

        printf("%d\n", index);
    }

    return 0;
}
