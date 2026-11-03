/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print Stop, Wait, or Go based on user input.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

Input 2:
RED
Output 2:
Stop
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED = 0,
    YELLOW = 1,
    GREEN = 2
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

        int light = -1;
        if (strcmp(input, "RED") == 0 || strcmp(input, "0") == 0) {
            light = RED;
        } else if (strcmp(input, "YELLOW") == 0 || strcmp(input, "1") == 0) {
            light = YELLOW;
        } else if (strcmp(input, "GREEN") == 0 || strcmp(input, "2") == 0) {
            light = GREEN;
        }

        switch (light) {
            case RED:
                printf("Stop\n");
                break;
            case YELLOW:
                printf("Wait\n");
                break;
            case GREEN:
                printf("Go\n");
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}
