/*
Q133: Create an enum for months (JAN=1..DEC=12) and print how many days each month has (non-leap year).

Sample Test Cases:
Input 1:
(No input required)
Output 1:
JAN: 31 days
FEB: 28 days
MAR: 31 days
APR: 30 days
MAY: 31 days
JUN: 30 days
JUL: 31 days
AUG: 31 days
SEP: 30 days
OCT: 31 days
NOV: 30 days
DEC: 31 days

Input 2:
(No input required)
Output 2:
JAN: 31 days
FEB: 28 days
MAR: 31 days
APR: 30 days
MAY: 31 days
JUN: 30 days
JUL: 31 days
AUG: 31 days
SEP: 30 days
OCT: 31 days
NOV: 30 days
DEC: 31 days
*/

#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    const char *monthNames[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    for (int m = JAN; m <= DEC; m++) {
        int days;
        switch (m) {
            case FEB:
                days = 28;
                break;
            case APR:
            case JUN:
            case SEP:
            case NOV:
                days = 30;
                break;
            default:
                days = 31;
                break;
        }
        printf("%s: %d days\n", monthNames[m], days);
    }

    return 0;
}
