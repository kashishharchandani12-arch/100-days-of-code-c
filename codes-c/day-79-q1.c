/*
Q129: Read space-separated integers from numbers.txt and compute their sum and average.

Sample Test Cases:
Input 1:
(numbers.txt contains: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

Input 2:
(numbers.txt contains: 5 10 15)
Output 2:
Sum = 30
Average = 10.00
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    long long sum = 0;
    int count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in numbers.txt\n");
    } else {
        double average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
