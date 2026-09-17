// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1;
    for (int i = 0; i < n && distinct; i++) {
        for (int j = 0; j < m && distinct; j++) {
            if (i == j) {
                for (int k = 0; k < n && distinct; k++) {
                    if (k != i) {
                        if (matrix[i][j] == matrix[k][k]) {
                            distinct = 0;
                        }
                    }
                }
            }
        }
    }

    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}