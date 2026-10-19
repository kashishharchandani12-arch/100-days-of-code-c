/*
Q117: Write a program to take two sorted arrays of sizes m and n as input. Merge the two arrays into a single sorted array and print the merged array.

Sample Test Cases:
Input 1:
4
2 7 11 15
3
4 8 10
Output 1:
2 4 7 8 10 11 15

Input 2:
3
1 2 3
3
4 5 6
Output 2:
1 2 3 4 5 6
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    if (scanf("%d", &m) != 1 || m < 0) {
        return 0;
    }

    int *a = (m > 0) ? (int *)malloc((size_t)m * sizeof(int)) : NULL;
    if (m > 0 && a == NULL) {
        return 1;
    }
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &a[i]) != 1) {
            free(a);
            return 1;
        }
    }

    if (scanf("%d", &n) != 1 || n < 0) {
        free(a);
        return 0;
    }

    int *b = (n > 0) ? (int *)malloc((size_t)n * sizeof(int)) : NULL;
    if (n > 0 && b == NULL) {
        free(a);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i]) != 1) {
            free(a);
            free(b);
            return 1;
        }
    }

    int *merged = (m + n > 0) ? (int *)malloc((size_t)(m + n) * sizeof(int)) : NULL;
    if (m + n > 0 && merged == NULL) {
        free(a);
        free(b);
        return 1;
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }

    for (int idx = 0; idx < k; idx++) {
        if (idx > 0) {
            printf(" ");
        }
        printf("%d", merged[idx]);
    }
    printf("\n");

    free(a);
    free(b);
    free(merged);
    return 0;
}
