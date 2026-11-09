/*
Q138: Define an enum for seasons (SPRING=0..WINTER=3) and print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
(No input required)
Output 1:
SPRING = 0
SUMMER = 1
AUTUMN = 2
WINTER = 3

Input 2:
(No input required)
Output 2:
SPRING = 0
SUMMER = 1
AUTUMN = 2
WINTER = 3
*/

#include <stdio.h>

enum Season {
    SPRING = 0,
    SUMMER = 1,
    AUTUMN = 2,
    WINTER = 3
};

int main() {
    const char *seasonNames[] = {
        "SPRING", "SUMMER", "AUTUMN", "WINTER"
    };

    for (int s = SPRING; s <= WINTER; s++) {
        printf("%s = %d\n", seasonNames[s], s);
    }

    return 0;
}
