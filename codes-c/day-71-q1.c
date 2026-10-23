/*
Q121: Write a C program that creates a info.txt file in write mode and writes the user's name and age to it using fprintf().

Sample Test Cases:
Input 1:
Rahul
23
Output 1:
File created successfully! Data written to info.txt

Input 2:
Alice Smith
30
Output 2:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main() {
    char name[256];
    int age;
    if (scanf(" %255[^\n]", name) == 1 && scanf("%d", &age) == 1) {
        FILE *fp = fopen("info.txt", "w");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        fprintf(fp, "Name: %s\nAge: %d\n", name, age);
        fclose(fp);
        printf("File created successfully! Data written to info.txt\n");
    }
    return 0;
}
