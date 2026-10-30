/*
Q128: Read a text file and count vowels and consonants (ignoring digits and special characters).

Sample Test Cases:
Input 1:
sample.txt (contains: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

Input 2:
data.txt (contains: Hello 123! World?)
Output 2:
Vowels: 3
Consonants: 7
*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char filename[256];
    if (scanf("%255s", filename) == 1) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }

        int ch;
        int vowels = 0, consonants = 0;
        while ((ch = fgetc(fp)) != EOF) {
            if (isalpha((unsigned char)ch)) {
                char lower = (char)tolower((unsigned char)ch);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        fclose(fp);
        printf("Vowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);
    }
    return 0;
}
