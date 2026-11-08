/*
Q137: Create an enum for user roles (ADMIN=1, USER=2, GUEST=3) and display access messages based on role input.

Sample Test Cases:
Input 1:
1
Output 1:
Welcome Admin! Full access granted.

Input 2:
GUEST
Output 2:
Welcome Guest! Limited access granted.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN = 1,
    USER = 2,
    GUEST = 3
};

static void toUpperStr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

int main() {
    char input[20];
    if (scanf("%19s", input) == 1) {
        toUpperStr(input);

        int role = -1;
        if (strcmp(input, "ADMIN") == 0 || strcmp(input, "1") == 0) {
            role = ADMIN;
        } else if (strcmp(input, "USER") == 0 || strcmp(input, "2") == 0) {
            role = USER;
        } else if (strcmp(input, "GUEST") == 0 || strcmp(input, "3") == 0) {
            role = GUEST;
        }

        switch (role) {
            case ADMIN:
                printf("Welcome Admin! Full access granted.\n");
                break;
            case USER:
                printf("Welcome User! Standard access granted.\n");
                break;
            case GUEST:
                printf("Welcome Guest! Limited access granted.\n");
                break;
            default:
                printf("Invalid role\n");
                break;
        }
    }

    return 0;
}
