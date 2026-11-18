/*
Q147: Store employee data in a binary file using fwrite() and read back using fread().

Sample Test Cases:
Input 1:
2
Alice
101 55000
Bob
102 62000.5
Output 1:
ID: 101 | Name: Alice | Salary: 55000.00
ID: 102 | Name: Bob | Salary: 62000.50

Input 2:
1
Priya Nair
305 78500.75
Output 2:
ID: 305 | Name: Priya Nair | Salary: 78500.75
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Employee *employees = malloc((size_t)n * sizeof(struct Employee));
    struct Employee *readEmployees = malloc((size_t)n * sizeof(struct Employee));
    if (employees == NULL || readEmployees == NULL) {
        free(employees);
        free(readEmployees);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf(" %99[^\n]", employees[i].name) != 1 ||
            scanf("%d %f", &employees[i].id, &employees[i].salary) != 2) {
            free(employees);
            free(readEmployees);
            return 0;
        }
    }

    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        free(employees);
        free(readEmployees);
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), (size_t)n, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        free(employees);
        free(readEmployees);
        return 1;
    }
    size_t count = fread(readEmployees, sizeof(struct Employee), (size_t)n, fp);
    fclose(fp);

    for (size_t i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n",
               readEmployees[i].id, readEmployees[i].name, readEmployees[i].salary);
    }

    free(employees);
    free(readEmployees);
    return 0;
}
