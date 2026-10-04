/*
Q102: Find the 0-based index of the ceil of x in a sorted array (first occurrence, or -1).

Sample Test Cases:
Input 1:
7
1 2 8 10 10 12 19
5
Output 1:
2

Input 2:
7
1 2 8 10 10 12 19
20
Output 2:
-1
*/

#include <stdio.h>
#include <stdlib.h>

int findCeilIndex(const int *arr, int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 0) {
        int *arr = (n > 0) ? (int *)malloc((size_t)n * sizeof(int)) : NULL;
        if (n > 0 && arr == NULL) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                free(arr);
                return 1;
            }
        }
        int x;
        if (scanf("%d", &x) == 1) {
            printf("%d\n", findCeilIndex(arr, n, x));
        }
        free(arr);
    }
    return 0;
}
