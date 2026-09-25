/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    if (scanf("%999[^\n]", sentence) == 1) {
        char longest[1000] = "";
        char current[1000] = "";
        int curLen = 0;
        int maxLen = 0;

        for (int i = 0; ; i++) {
            if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\0') {
                current[curLen++] = sentence[i];
            } else {
                if (curLen > 0) {
                    current[curLen] = '\0';
                    if (curLen > maxLen) {
                        maxLen = curLen;
                        strcpy(longest, current);
                    }
                    curLen = 0;
                }
            }
            if (sentence[i] == '\0') break;
        }
        printf("%s\n", longest);
    }
    return 0;
}