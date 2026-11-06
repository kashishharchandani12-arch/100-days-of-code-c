/*
Q135: Assign explicit enum values starting from 10 (A=10, B=20, C=30) and print them.

Sample Test Cases:
Input 1:
(No input required)
Output 1:
A = 10
B = 20
C = 30

Input 2:
(No input required)
Output 2:
A = 10
B = 20
C = 30
*/

#include <stdio.h>

enum Letters {
    A = 10,
    B = 20,
    C = 30
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
