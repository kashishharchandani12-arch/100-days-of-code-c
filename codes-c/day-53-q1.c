/*
Q103: Calculate the leftmost pivot index of an integer array (or -1).

Sample Test Cases:
Input 1:
6
1 7 3 6 5 6
Output 1:
3

Input 2:
3
1 2 3
Output 2:
-1
*/

#include <stdio.h>
#include <stdlib.h>

int findPivotIndex(const int *nums, int n) {
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 0) {
        int *nums = (n > 0) ? (int *)malloc((size_t)n * sizeof(int)) : NULL;
        if (n > 0 && nums == NULL) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &nums[i]) != 1) {
                free(nums);
                return 1;
            }
        }
        printf("%d\n", findPivotIndex(nums, n));
        free(nums);
    }
    return 0;
}
