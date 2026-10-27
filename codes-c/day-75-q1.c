/*
Q125: Open an existing file in append mode and append a user-entered line of text.

Sample Test Cases:
Input 1:
data.txt
This is appended text.
Output 1:
File updated successfully with appended text.

Input 2:
notes.txt
Second line added.
Output 2:
File updated successfully with appended text.
*/

#include <stdio.h>

int main() {
    char filename[256];
    char text[1000];
    if (scanf("%255s", filename) == 1 && scanf(" %999[^\n]", text) == 1) {
        FILE *fp = fopen(filename, "a");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        fprintf(fp, "%s\n", text);
        fclose(fp);
        printf("File updated successfully with appended text.\n");
    }
    return 0;
}
