/*
Q120: Write a program to take a string input and change it to sentence/title case (capitalize first letter of each word).

Sample Test Cases:
Input 1:
i am trying to learn programming.
Output 1:
I Am Trying To Learn Programming.

Input 2:
hello world from c
Output 2:
Hello World From C
*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char str[1000];
    if (scanf("%999[^\n]", str) == 1) {
        int newWord = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            unsigned char ch = (unsigned char)str[i];
            if (isspace(ch)) {
                newWord = 1;
            } else if (newWord) {
                str[i] = (char)toupper(ch);
                newWord = 0;
            } else {
                str[i] = (char)tolower(ch);
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
