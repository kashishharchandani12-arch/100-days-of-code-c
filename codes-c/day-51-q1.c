/*
Q101: Find the first and last occurrence indices of a target in a sorted array (or -1, -1).

Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3, 4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1, -1
*/

#include <stdio.h>
#include <stdlib.h>

int findBound(const int *nums, int n, int target, int findFirst) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (findFirst) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
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
        int target;
        if (scanf("%d", &target) == 1) {
            int first = findBound(nums, n, target, 1);
            int last = findBound(nums, n, target, 0);
            printf("%d, %d\n", first, last);
        }
        free(nums);
    }
    return 0;
}
