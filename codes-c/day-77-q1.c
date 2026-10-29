/*
Q127: Read text from input.txt, convert lowercase letters to uppercase, and write to output.txt.

Sample Test Cases:
Input 1:
(input.txt contains: Hello World\nC Programming)
Output 1:
Text converted to uppercase and written to output.txt
(output.txt contains: HELLO WORLD\nC PROGRAMMING)

Input 2:
(input.txt contains: file handling 123!)
Output 2:
Text converted to uppercase and written to output.txt
(output.txt contains: FILE HANDLING 123!)
*/

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output.txt!\n");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    fclose(in);
    fclose(out);
    printf("Text converted to uppercase and written to output.txt\n");
    return 0;
}
