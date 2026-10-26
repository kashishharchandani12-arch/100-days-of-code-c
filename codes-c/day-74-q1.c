/*
Q124: Copy content from a source file to a destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
source.txt destination.txt
Output 1:
File copied successfully to destination.txt

Input 2:
info.txt backup.txt
Output 2:
File copied successfully to backup.txt
*/

#include <stdio.h>

int main() {
    char srcFile[256], destFile[256];
    if (scanf("%255s %255s", srcFile, destFile) == 2) {
        FILE *src = fopen(srcFile, "r");
        if (src == NULL) {
            printf("Error opening source file!\n");
            return 1;
        }

        FILE *dest = fopen(destFile, "w");
        if (dest == NULL) {
            printf("Error opening destination file!\n");
            fclose(src);
            return 1;
        }

        int ch;
        while ((ch = fgetc(src)) != EOF) {
            fputc(ch, dest);
        }

        fclose(src);
        fclose(dest);
        printf("File copied successfully to %s\n", destFile);
    }
    return 0;
}
