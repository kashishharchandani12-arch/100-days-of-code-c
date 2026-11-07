/*
Q136: Use enum to represent menu choices (ADD=1, SUBTRACT=2, MULTIPLY=3) and perform the chosen operation using switch.

Sample Test Cases:
Input 1:
1 10 20
Output 1:
30

Input 2:
MULTIPLY 5 6
Output 2:
30
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3
};

static void toUpperStr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

int main() {
    char choiceStr[20];
    int a, b;

    if (scanf("%19s %d %d", choiceStr, &a, &b) == 3) {
        toUpperStr(choiceStr);

        int choice = -1;
        if (strcmp(choiceStr, "ADD") == 0 || strcmp(choiceStr, "1") == 0) {
            choice = ADD;
        } else if (strcmp(choiceStr, "SUBTRACT") == 0 || strcmp(choiceStr, "2") == 0) {
            choice = SUBTRACT;
        } else if (strcmp(choiceStr, "MULTIPLY") == 0 || strcmp(choiceStr, "3") == 0) {
            choice = MULTIPLY;
        }

        switch (choice) {
            case ADD:
                printf("%d\n", a + b);
                break;
            case SUBTRACT:
                printf("%d\n", a - b);
                break;
            case MULTIPLY:
                printf("%d\n", a * b);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}
