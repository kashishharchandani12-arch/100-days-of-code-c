/*
Q139: Show that enums store integers by defining enum with custom values and printing them with sizeof.

Sample Test Cases:
Input 1:
(No input required)
Output 1:
SUCCESS = 200
NOT_FOUND = 404
SERVER_ERROR = 500
sizeof(enum Status) = 4 bytes
sizeof(int) = 4 bytes

Input 2:
(No input required)
Output 2:
SUCCESS = 200
NOT_FOUND = 404
SERVER_ERROR = 500
sizeof(enum Status) = 4 bytes
sizeof(int) = 4 bytes
*/

#include <stdio.h>

enum Status {
    SUCCESS = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

int main() {
    enum Status s = SUCCESS;

    printf("SUCCESS = %d\n", SUCCESS);
    printf("NOT_FOUND = %d\n", NOT_FOUND);
    printf("SERVER_ERROR = %d\n", SERVER_ERROR);
    printf("sizeof(enum Status) = %lu bytes\n", (unsigned long)sizeof(s));
    printf("sizeof(int) = %lu bytes\n", (unsigned long)sizeof(int));

    return 0;
}
