// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            {
                printf("Enter element a[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            {
                printf("Enter element b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}