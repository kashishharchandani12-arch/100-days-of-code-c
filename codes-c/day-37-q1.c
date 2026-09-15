// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/


#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSums[rows];
    
    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize row sum to 0
        for (int j = 0; j < cols; j++) {
            printf("Enter element for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Add to the row sum
        }
    }
    
    // Print the sum of each row
    printf("Sum of each row: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    
    return 0;
}