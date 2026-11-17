/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Raj
101
12 5 2020
Output 1:
Name: Raj | ID: 101 | Joining Date: 12/05/2020

Input 2:
Ananya Verma
204
3 11 2022
Output 2:
Name: Ananya Verma | ID: 204 | Joining Date: 03/11/2022
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    if (scanf(" %99[^\n]", emp.name) == 1 &&
        scanf("%d", &emp.id) == 1 &&
        scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) == 3) {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
               emp.name, emp.id,
               emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    }

    return 0;
}
