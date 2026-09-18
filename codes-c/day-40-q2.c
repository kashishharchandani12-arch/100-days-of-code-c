// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int n, m, p, q;
    printf("Enter the dimensions of the first matrix: ");
    scanf("%d %d", &n, &m);
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);

    if (m != p) {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }

    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Read the first matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the second matrix
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}