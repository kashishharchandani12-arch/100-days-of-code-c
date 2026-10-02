/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

Input 2:
01/12/2000
Output 2:
01-Dec-2000
*/

#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) == 3) {
        if (mm >= 1 && mm <= 12) {
            printf("%02d-%s-%04d\n", dd, months[mm - 1], yyyy);
        } else {
            printf("Invalid month\n");
        }
    }
    return 0;
}
