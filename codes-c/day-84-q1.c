/*
Q134: Define an enum with SUCCESS=0, FAILURE=1, and TIMEOUT=2, take user input and print messages accordingly.

Sample Test Cases:
Input 1:
0
Output 1:
Operation succeeded

Input 2:
TIMEOUT
Output 2:
Operation timed out
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
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

        int status = -1;
        if (strcmp(input, "SUCCESS") == 0 || strcmp(input, "0") == 0) {
            status = SUCCESS;
        } else if (strcmp(input, "FAILURE") == 0 || strcmp(input, "1") == 0) {
            status = FAILURE;
        } else if (strcmp(input, "TIMEOUT") == 0 || strcmp(input, "2") == 0) {
            status = TIMEOUT;
        }

        switch (status) {
            case SUCCESS:
                printf("Operation succeeded\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
            default:
                printf("Invalid status\n");
                break;
        }
    }

    return 0;
}
