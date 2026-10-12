/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6

Input 2:
10
8 5 10 7 9 4 15 12 90 13
4
Output 2:
10 10 10 15 15 90 90
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("\n");
            return 0;
        }

        int *arr = (int *)malloc((size_t)n * sizeof(int));
        if (arr == NULL) {
            return 1;
        }

        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                free(arr);
                return 0;
            }
        }

        int k;
        if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
            printf("-1\n");
            free(arr);
            return 0;
        }

        for (int i = 0; i <= n - k; i++) {
            int maxVal = arr[i];
            for (int j = 1; j < k; j++) {
                if (arr[i + j] > maxVal) {
                    maxVal = arr[i + j];
                }
            }
            if (i > 0) {
                printf(" ");
            }
            printf("%d", maxVal);
        }
        printf("\n");

        free(arr);
    }
    return 0;
}
