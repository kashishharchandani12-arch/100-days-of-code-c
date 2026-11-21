/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
John
106 85
John Doe
106 91
Output 1:
Modified Data: Name: John Doe | Roll: 106 | Marks: 91.00

Input 2:
Meera
110 76.5
Meera Iyer
112 84.75
Output 2:
Modified Data: Name: Meera Iyer | Roll: 112 | Marks: 84.75
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

void modifyStudent(struct Student *ptr, const char *newName, int newRoll, float newMarks) {
    strncpy(ptr->name, newName, sizeof(ptr->name) - 1);
    ptr->name[sizeof(ptr->name) - 1] = '\0';
    ptr->roll = newRoll;
    ptr->marks = newMarks;
}

int main() {
    struct Student s;
    struct Student *ptr = &s;

    if (scanf(" %99[^\n]", ptr->name) != 1 ||
        scanf("%d %f", &ptr->roll, &ptr->marks) != 2) {
        return 0;
    }

    char newName[100];
    int newRoll;
    float newMarks;
    if (scanf(" %99[^\n]", newName) != 1 ||
        scanf("%d %f", &newRoll, &newMarks) != 2) {
        return 0;
    }

    modifyStudent(ptr, newName, newRoll, newMarks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.2f\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
