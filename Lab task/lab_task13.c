#include <stdio.h>

int main(){

    int h, m,total_passing_hour   ;
    printf("Enter a 24-hour time: ");
    scanf("%2d :%2d", &h, &m);
    
    total_passing_hour = (h * 60) + m;

    if (total_passing_hour <= ((8 * 60) + (103 / 2)))
        printf("Closest departure time is 8:00 AM., arriving at 10:16 AM");
    else if ( total_passing_hour< ((9 * 60) + 43) + (96 / 2))
        printf("Closest departure time is 9:43 AM., arriving at 11:52 AM");
    else if (total_passing_hour <= ((11 * 60) + 19) + (88 / 2))
        printf("Closest departure time is 11:19 AM., arriving at 1:31 PM");
    else if (total_passing_hour< ((12 * 60) + 47) + (73 / 2))
        printf("Closest departure time is 12:47 PM., arriving at 3:00 PM");
    else if (total_passing_hour <= ((14 * 60) + (105 / 2)))
        printf("Closest departure time is 2:00 PM., arriving at 4:08 PM");
    else if ( total_passing_hour< ((15 * 60) + 45) + (195 / 2))
        printf("Closest departure time is 3:45 PM., arriving at 5:55 PM");
    else if (total_passing_hour<= ((19 * 60) + (165 / 2)))
        printf("Closest departure time is 7:00 PM., arriving at 9:20 PM");
    else 
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM");


    return 0;
}