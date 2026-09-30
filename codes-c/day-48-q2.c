/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

Input 2:
Hello World
Output 2:
olleH dlroW
*/

#include <stdio.h>

void reverseRange(char *str, int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char sentence[1000];
    if (scanf("%999[^\n]", sentence) == 1) {
        int i = 0;
        while (sentence[i] != '\0') {
            while (sentence[i] == ' ' || sentence[i] == '\t') {
                i++;
            }
            if (sentence[i] == '\0') {
                break;
            }
            int start = i;
            while (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\0') {
                i++;
            }
            reverseRange(sentence, start, i - 1);
        }
        printf("%s\n", sentence);
    }
    return 0;
}
