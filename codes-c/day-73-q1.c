/*
Q123: Read a text file and count the total number of characters, words, and lines in the file.

Sample Test Cases:
Input 1:
sample.txt (contains: Hello world\nThis is C programming)
Output 1:
Characters: 33
Words: 6
Lines: 2

Input 2:
notes.txt (contains: One line only\n)
Output 2:
Characters: 14
Words: 3
Lines: 1
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
        int lastChar = '\n';
        int chars = 0, words = 0, lines = 0;
        int inWord = 0;

        while ((ch = fgetc(fp)) != EOF) {
            chars++;
            lastChar = ch;
            if (ch == '\n') {
                lines++;
            }
            if (isspace((unsigned char)ch)) {
                inWord = 0;
            } else if (!inWord) {
                inWord = 1;
                words++;
            }
        }

        if (chars > 0 && lastChar != '\n') {
            lines++;
        }

        fclose(fp);
        printf("Characters: %d\n", chars);
        printf("Words: %d\n", words);
        printf("Lines: %d\n", lines);
    }
    return 0;
}
