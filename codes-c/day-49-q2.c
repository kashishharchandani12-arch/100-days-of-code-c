/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

Input 2:
Raj Kumar Sharma
Output 2:
R.K. Sharma
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    if (scanf("%999[^\n]", name) == 1) {
        int len = (int)strlen(name);
        while (len > 0 && (name[len - 1] == ' ' || name[len - 1] == '\t')) {
            len--;
        }
        name[len] = '\0';

        int lastStart = -1;
        for (int i = 0; i < len; i++) {
            if (name[i] != ' ' && name[i] != '\t' &&
                (i == 0 || name[i - 1] == ' ' || name[i - 1] == '\t')) {
                lastStart = i;
            }
        }

        if (lastStart != -1) {
            int hasInitials = 0;
            for (int i = 0; i < lastStart; i++) {
                if (name[i] != ' ' && name[i] != '\t' &&
                    (i == 0 || name[i - 1] == ' ' || name[i - 1] == '\t')) {
                    printf("%c.", toupper((unsigned char)name[i]));
                    hasInitials = 1;
                }
            }
            if (hasInitials) {
                printf(" ");
            }
            printf("%s\n", &name[lastStart]);
        }
    }
    return 0;
}
