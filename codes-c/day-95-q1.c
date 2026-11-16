/*
Q145: Return a structure containing the top student's details from a function that takes an array of students.

Sample Test Cases:
Input 1:
3
Riya
102 96
Aman
101 88
Karan
103 91
Output 1:
Top Student: Riya | Roll: 102 | Marks: 96.00

Input 2:
2
Neha Sharma
201 89.5
Vikram Singh
202 94.25
Output 2:
Top Student: Vikram Singh | Roll: 202 | Marks: 94.25
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

struct Student findTopStudent(const struct Student students[], int n) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    return students[topIndex];
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student *students = malloc((size_t)n * sizeof(struct Student));
    if (students == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf(" %99[^\n]", students[i].name) != 1 ||
            scanf("%d %f", &students[i].roll, &students[i].marks) != 2) {
            free(students);
            return 0;
        }
    }

    struct Student top = findTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", top.name, top.roll, top.marks);

    free(students);
    return 0;
}
