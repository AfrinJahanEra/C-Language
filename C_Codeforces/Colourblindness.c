#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        char s1[101]; 
        char s2[101]; 
        scanf("%s", s1);
        scanf("%s", s2);
        for (int j = 0; j < n; j++) {
            if (s1[j] == 'G') {
                if (s2[j] == 'B') {
                    s2[j] = s1[j];
                }
            }
            else if (s1[j] == 'B') {
                if (s2[j] == 'G') {
                    s2[j] = s1[j];
                }
            }
        }
        int flag=0;
        for (int j = 0; j < n; j++) {
            if (s1[j] != s2[j]) {
                flag=1;
                break;
            }
        }
        if(flag){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
