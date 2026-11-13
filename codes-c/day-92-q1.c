/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Aman
101 85
Riya
102 92.5
Karan
103 78
Neha
104 88.75
Vikram
105 90
Output 1:
Name: Aman | Roll: 101 | Marks: 85.00
Name: Riya | Roll: 102 | Marks: 92.50
Name: Karan | Roll: 103 | Marks: 78.00
Name: Neha | Roll: 104 | Marks: 88.75
Name: Vikram | Roll: 105 | Marks: 90.00

Input 2:
Asha Verma
201 91
Dev Patel
202 84.5
Meera Nair
203 95
Sahil Khan
204 76.25
Tina Roy
205 89
Output 2:
Name: Asha Verma | Roll: 201 | Marks: 91.00
Name: Dev Patel | Roll: 202 | Marks: 84.50
Name: Meera Nair | Roll: 203 | Marks: 95.00
Name: Sahil Khan | Roll: 204 | Marks: 76.25
Name: Tina Roy | Roll: 205 | Marks: 89.00
*/

#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (scanf(" %99[^\n]", students[i].name) != 1 ||
            scanf("%d %f", &students[i].roll_no, &students[i].marks) != 2) {
            return 0;
        }
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
