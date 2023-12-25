#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int count1 = 0;
    int count2[26] = {0};

    for (int i = 0; s[i] != '}'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';
            if (count2[index] == 0) {
                count1++;
                count2[index] = 1;
            }
        }
    }

    printf("%d\n", count1);

    return 0;
}
