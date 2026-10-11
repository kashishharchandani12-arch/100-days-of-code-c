/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k using the sliding window technique.

Sample Test Cases:
Input 1:
4
100 200 300 400
2
Output 1:
700

Input 2:
9
1 4 2 10 23 3 1 0 20
4
Output 2:
39
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("-1\n");
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

        int windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }

        int maxSum = windowSum;
        for (int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k];
            if (windowSum > maxSum) {
                maxSum = windowSum;
            }
        }

        printf("%d\n", maxSum);
        free(arr);
    }
    return 0;
}
