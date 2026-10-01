/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

Input 2:
Alice Bob Charlie
Output 2:
A.B.C.
*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char name[1000];
    if (scanf("%999[^\n]", name) == 1) {
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] != ' ' && name[i] != '\t' &&
                (i == 0 || name[i - 1] == ' ' || name[i - 1] == '\t')) {
                printf("%c.", toupper((unsigned char)name[i]));
            }
        }
        printf("\n");
    }
    return 0;
}
