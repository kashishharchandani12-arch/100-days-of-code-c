/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char ch;
    if (scanf("%999s", str) == 1) {
        scanf(" %c", &ch);
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ch) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}