#include <stdio.h>

int main() {
    int p1, p2;

    printf("===================================\n");
    printf("   R O C K   P A P E R   S C I S S O R S\n");
    printf("===================================\n\n");

    printf("Enter player choices (0=Rock, 1=Paper, 2=Scissors): ");
    scanf("%d %d", &p1, &p2);

    if (p1 == 0 && p2 == 1 || p1 == 1 && p2 == 2 || p1 == 2 && p2 == 0)
        printf("Player 2 wins the game!\n");
    else if (p2 == 0 && p1 == 1 || p2 == 1 && p1 == 2 || p2 == 2 && p1 == 0)
        printf("Player 1 wins the game!\n");
    else
        printf("Draw\n");

    return 0;
}
