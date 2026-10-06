/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
8
Output 1:
6

Input 2:
4
Output 2:
-1
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("-1\n");
            return 0;
        }

        long long totalSum = (long long)n * (n + 1) / 2;
        int left = 1, right = n, pivot = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sq = (long long)mid * mid;
            if (sq == totalSum) {
                pivot = mid;
                break;
            } else if (sq < totalSum) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        printf("%d\n", pivot);
    }
    return 0;
}
