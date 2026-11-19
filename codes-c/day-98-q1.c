/*
Q148: Take two structs (Student) as input and check if they are identical (same name, roll, marks).

Sample Test Cases:
Input 1:
Asha
101 90
Asha
101 90
Output 1:
Identical

Input 2:
Asha
101 90
Rohan
102 85
Output 2:
Not Identical
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    float diff = s1.marks - s2.marks;
    if (diff < 0.0f) {
        diff = -diff;
    }
    return (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && diff < 1e-5f);
}

int main() {
    struct Student s1, s2;

    if (scanf(" %99[^\n]", s1.name) == 1 &&
        scanf("%d %f", &s1.roll, &s1.marks) == 2 &&
        scanf(" %99[^\n]", s2.name) == 1 &&
        scanf("%d %f", &s2.roll, &s2.marks) == 2) {
        if (areIdentical(s1, s2)) {
            printf("Identical\n");
        } else {
            printf("Not Identical\n");
        }
    }

    return 0;
}
