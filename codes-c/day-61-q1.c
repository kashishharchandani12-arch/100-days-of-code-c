/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray (window) of size k moving from left to right. If no negative integer exists in a window, print 0 for that window. Print the results separated by spaces.

Sample Test Cases:
Input 1:
5
-8 2 3 -6 10
2
Output 1:
-8 0 -6 -6

Input 2:
8
12 -1 -7 8 -15 30 16 28
3
Output 2:
-1 -1 -7 -15 -15 0
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    int *neg_idx = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL || neg_idx == NULL) {
        free(arr);
        free(neg_idx);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            free(neg_idx);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        free(neg_idx);
        return 0;
    }

    int front = 0, back = 0;
    int first_out = 1;

    for (int i = 0; i < n; i++) {
        while (front < back && neg_idx[front] <= i - k) {
            front++;
        }
        if (arr[i] < 0) {
            neg_idx[back++] = i;
        }
        if (i >= k - 1) {
            if (!first_out) {
                printf(" ");
            }
            if (front < back) {
                printf("%d", arr[neg_idx[front]]);
            } else {
                printf("0");
            }
            first_out = 0;
        }
    }
    printf("\n");

    free(arr);
    free(neg_idx);
    return 0;
}
