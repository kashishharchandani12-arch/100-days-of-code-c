/*
Q130: Store multiple student records (name, roll, marks) in a file using fprintf(), then read with fscanf() and display.

Sample Test Cases:
Input 1:
2
Asha 101 85
Ravi 102 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

Input 2:
1
Kiran 201 78.5
Output 2:
Name: Kiran | Roll: 201 | Marks: 78.5
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for writing\n");
        return 1;
    }

    char name[100];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %f", name, &roll, &marks) == 3) {
            fprintf(fp, "%s %d %g\n", name, roll, marks);
        }
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for reading\n");
        return 1;
    }

    while (fscanf(fp, "%99s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %g\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
