#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int i;
    for (i = n + 1; i <= k; i++) {
        int flag = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;  
                break;
            }
        }
        if (flag) {
            
            break;
        }
    }
    if(i==k){
        printf("YES");
        return 0;
    }
    printf("NO");

    return 0;
}
