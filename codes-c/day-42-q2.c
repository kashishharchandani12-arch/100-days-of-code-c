// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to uppercase
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}