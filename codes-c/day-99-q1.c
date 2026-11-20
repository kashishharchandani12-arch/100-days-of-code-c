/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Tina
105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88.00

Input 2:
Arjun Mehta
210 92.5
Output 2:
Name: Arjun Mehta | Roll: 210 | Marks: 92.50
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));
    if (s == NULL) {
        return 1;
    }

    if (scanf(" %99[^\n]", s->name) == 1 &&
        scanf("%d %f", &s->roll, &s->marks) == 2) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s->name, s->roll, s->marks);
    }

    free(s);
    return 0;
}
