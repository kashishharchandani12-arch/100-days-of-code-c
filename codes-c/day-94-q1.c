/*
Q144: Write a function that accepts a structure (Student) as parameter and prints its members.

Sample Test Cases:
Input 1:
Kabir
101 87.5
Output 1:
Name: Kabir | Roll: 101 | Marks: 87.50

Input 2:
Ananya Rao
204 94
Output 2:
Name: Ananya Rao | Roll: 204 | Marks: 94.00
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    if (scanf(" %99[^\n]", s.name) == 1 &&
        scanf("%d %f", &s.roll_no, &s.marks) == 2) {
        printStudent(s);
    }

    return 0;
}
