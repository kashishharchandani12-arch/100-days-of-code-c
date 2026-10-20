/*
Q118: Write a program to take an input array of size n containing distinct integers from 0 to n with one number missing. Find and print the missing number using the sum formula.

Sample Test Cases:
Input 1:
4
0 3 2 4
Output 1:
1

Input 2:
3
3 0 1
Output 2:
2
*/

#include <inttypes.h>
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int64_t expected_sum = (int64_t)n * (n + 1) / 2;
    int64_t actual_sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) != 1) {
            return 1;
        }
        actual_sum += x;
    }

    printf("%" PRId64 "\n", expected_sum - actual_sum);
    return 0;
}
