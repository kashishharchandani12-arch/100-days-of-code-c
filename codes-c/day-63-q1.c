/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
6
10 5 4 3 48 6
3
Output 1:
5

Input 2:
5
7 10 4 3 20
4
Output 2:
10
*/

#include <stdio.h>
#include <stdlib.h>

static int compare_ints(const void *a, const void *b) {
    int va = *(const int *)a;
    int vb = *(const int *)b;
    return (va > vb) - (va < vb);
}

int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        free(arr);
        return 0;
    }

    qsort(arr, (size_t)n, sizeof(int), compare_ints);
    printf("%d\n", arr[k - 1]);

    free(arr);
    return 0;
}
