// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>
int main() {
    int n, target;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Increase size by 1 to accommodate the new element

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &target);

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > target); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = target; // Insert the new element

    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}