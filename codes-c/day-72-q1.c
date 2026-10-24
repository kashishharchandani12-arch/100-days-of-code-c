/*
Q122: Open an existing file (info.txt) and read/print lines using fgets() until EOF.

Sample Test Cases:
Input 1:
(info.txt contains: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

Input 2:
(info.txt contains: Name: Alice Smith\nAge: 30)
Output 2:
Name: Alice Smith
Age: 30
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
