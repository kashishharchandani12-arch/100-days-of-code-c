/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
anagram
nagaram
Output 1:
Anagram

Input 2:
rat
car
Output 2:
Not Anagram
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[10000], t[10000];
    if (scanf("%9999s %9999s", s, t) != 2) {
        return 0;
    }

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
        if (t[i] >= 'a' && t[i] <= 'z') {
            freq[t[i] - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
