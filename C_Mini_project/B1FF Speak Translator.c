// b1ff_speak_translator.c
#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    printf("========================\n");
    printf("   B1FF SPEAK TRANSLATOR  \n");
    printf("========================\n\n");

    char c, message[MAX_SIZE] = {0};
    int i = 0;

    printf("Enter message: ");
    while ((c = getchar()) != '\n' && i < MAX_SIZE) {
        message[i++] = c;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < MAX_SIZE && message[i]; i++) {
        switch (c = toupper(message[i])) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default: putchar(c); break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
