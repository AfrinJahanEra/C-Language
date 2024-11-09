#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long int n;
        scanf("%ld",&n);
        if (n%2==0) {
            for (long int i=0; i<n/2;i++) {
                printf("1");
            }
        }
        else {
            printf("7");
            for (long int i=1;i<(n-1)/2;i++) {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
