/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

Input 2:
xy
Output 2:
x,xy,y
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (scanf("%999[^\n]", str) == 1) {
        int len = (int)strlen(str);
        int first = 1;

        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                if (!first) {
                    printf(",");
                }
                first = 0;
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
