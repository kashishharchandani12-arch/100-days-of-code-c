/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
4
-5 -2 -9 -3
Output 2:
-2
*/

#include <inttypes.h>
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int x;
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    int64_t curr_max = x;
    int64_t max_so_far = x;

    for (int i = 1; i < n; i++) {
        if (scanf("%d", &x) != 1) {
            return 1;
        }
        if (curr_max + x > x) {
            curr_max = curr_max + x;
        } else {
            curr_max = x;
        }
        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    printf("%" PRId64 "\n", max_so_far);
    return 0;
}
