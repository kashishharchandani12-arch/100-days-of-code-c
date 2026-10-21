/*
Q119: Write a program to take an integer array of size n containing integers from 1 to n-1 where all elements are unique except one repeated element. Find and print the repeated element in one single iteration using XOR.

Sample Test Cases:
Input 1:
5
1 3 4 2 2
Output 1:
2

Input 2:
4
1 2 3 1
Output 2:
1
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) != 1) {
            return 1;
        }
        ans ^= x;
        if (i > 0) {
            ans ^= i;
        }
    }

    printf("%d\n", ans);
    return 0;
}
