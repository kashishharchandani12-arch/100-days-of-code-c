/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%999s %999s", s1, s2) == 2) {
        size_t len1 = strlen(s1);
        size_t len2 = strlen(s2);

        if (len1 != len2) {
            printf("Not rotation\n");
        } else {
            char doubled[2000];
            strcpy(doubled, s1);
            strcat(doubled, s1);

            if (strstr(doubled, s2) != NULL) {
                printf("Rotation\n");
            } else {
                printf("Not rotation\n");
            }
        }
    }
    return 0;
}
