#include <stdio.h>

int main(){

    printf("*****************************************\n");
    printf("*          Letter Grade Calculator      *\n");
    printf("*****************************************\n");
    
    int grade, case_no;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    

    case_no = grade / 10;
    switch (case_no) {
        case 9:
        case 10:
            printf("Letter Grade: A");
            break;
        case 8:
            printf("Letter Grade: B");
            break;
        case 7:
            printf("Letter Grade: C");
            break;
        case 6:
            printf("Letter Grade: D");
            break;
        default:
            printf("Letter Grade: F");
            break;
    }
    if (grade < 0 || grade > 100) {
        printf("Error. Please put grade between 0 and 100.");
        return 0;
    }   

    return 0;
}
