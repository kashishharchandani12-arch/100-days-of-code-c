/*
Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct 0-based indices i and j in the array such that nums[i] + nums[j] == target. Print the two indices separated by a space, or "-1 -1" if no such pair exists.

Sample Test Cases:
Input 1:
4
2 7 11 15
9
Output 1:
0 1

Input 2:
3
3 2 4
6
Output 2:
1 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *nums = (int *)malloc((size_t)n * sizeof(int));
    if (nums == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        free(nums);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    free(nums);
    return 0;
}
