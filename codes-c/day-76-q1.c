/*
Q126: Ask user for filename, check if it exists (NULL check in read mode), and display content if it exists.

Sample Test Cases:
Input 1:
sample.txt
Output 1:
File opened successfully.
Hello World!

Input 2:
nonexistent.txt
Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main() {
    char filename[256];
    if (scanf("%255s", filename) == 1) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error: File does not exist!\n");
            return 1;
        }

        printf("File opened successfully.\n");
        char line[1024];
        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }

        fclose(fp);
    }
    return 0;
}
