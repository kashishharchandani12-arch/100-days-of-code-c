/*
Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. Print the output as comma-separated values.

Sample Test Cases:
Input 1:
4
1 3 2 4
Output 1:
3, 4, 4, -1

Input 2:
4
6 8 0 1
Output 2:
8, -1, 1, -1
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

        for (int i = 0; i < n; i++) {
            int nextGreater = -1;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    nextGreater = arr[j];
                    break;
                }
            }
            if (i > 0) {
                printf(", ");
            }
            printf("%d", nextGreater);
        }
        printf("\n");

        free(arr);
    }
    return 0;
}
