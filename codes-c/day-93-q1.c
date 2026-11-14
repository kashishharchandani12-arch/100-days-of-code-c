/*
Q143: Find and print the student with the highest marks from an array of student structures.

Sample Test Cases:
Input 1:
3
Aman
101 84
Riya
102 95.5
Karan
103 89
Output 1:
Topper: Riya | Roll: 102 | Marks: 95.50

Input 2:
2
Neha Sharma
201 91.25
Vikram Singh
202 88
Output 2:
Topper: Neha Sharma | Roll: 201 | Marks: 91.25
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

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
            scanf("%d %f", &students[i].roll_no, &students[i].marks) != 2) {
            free(students);
            return 0;
        }
    }

    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Topper: %s | Roll: %d | Marks: %.2f\n",
           students[topIndex].name, students[topIndex].roll_no, students[topIndex].marks);

    free(students);
    return 0;
}
