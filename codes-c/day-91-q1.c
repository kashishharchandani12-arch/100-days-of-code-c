/*
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Asha
101 88.5
Output 1:
Name: Asha | Roll: 101 | Marks: 88.50

Input 2:
Rohan Mehta
205 92
Output 2:
Name: Rohan Mehta | Roll: 205 | Marks: 92.00
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    if (scanf(" %99[^\n]", s.name) == 1 &&
        scanf("%d %f", &s.roll_no, &s.marks) == 2) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
    }

    return 0;
}
