/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int freq[26] = {0};
        char ans = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int idx = str[i] - 'a';
                if (freq[idx] > 0) {
                    ans = str[i];
                    break;
                }
                freq[idx]++;
            }
        }
        if (ans != '\0') {
            printf("%c\n", ans);
        } else {
            printf("None\n");
        }
    }
    return 0;
}