#include <stdio.h>

int main() {
    int m, d, y;
    

    printf("===========================================\n");
    printf("     D A T E   F O R M A T T E R\n");
    printf("===========================================\n\n");
    

    printf("Enter a date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &m, &d, &y);
  
    printf("\nYou entered the date: %d %02d %02d\n", y, m, d);
    
    return 0;
}
