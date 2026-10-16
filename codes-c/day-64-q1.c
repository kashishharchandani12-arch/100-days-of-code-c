/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
abcabcbb
Output 1:
3

Input 2:
pwwkew
Output 2:
3
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[--len] = '\0';
    }

    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int start = 0;
    int max_len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last_index[c] >= start) {
            start = last_index[c] + 1;
        }
        last_index[c] = i;
        int cur_len = i - start + 1;
        if (cur_len > max_len) {
            max_len = cur_len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
