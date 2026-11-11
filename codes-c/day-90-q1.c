/*
Q140: Define a struct Person with enum Gender {MALE, FEMALE, OTHER} and print person's name and gender.

Sample Test Cases:
Input 1:
Aarav
MALE
Output 1:
Name: Aarav | Gender: MALE

Input 2:
Priya Sharma
1
Output 2:
Name: Priya Sharma | Gender: FEMALE
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    enum Gender gender;
};

static void toUpperStr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

static const char *genderToString(enum Gender g) {
    switch (g) {
        case MALE:
            return "MALE";
        case FEMALE:
            return "FEMALE";
        case OTHER:
            return "OTHER";
        default:
            return "UNKNOWN";
    }
}

int main() {
    struct Person person;
    char genderInput[20];

    if (scanf(" %99[^\n]", person.name) == 1 && scanf("%19s", genderInput) == 1) {
        toUpperStr(genderInput);

        if (strcmp(genderInput, "MALE") == 0 || strcmp(genderInput, "0") == 0) {
            person.gender = MALE;
        } else if (strcmp(genderInput, "FEMALE") == 0 || strcmp(genderInput, "1") == 0) {
            person.gender = FEMALE;
        } else if (strcmp(genderInput, "OTHER") == 0 || strcmp(genderInput, "2") == 0) {
            person.gender = OTHER;
        } else {
            printf("Invalid gender\n");
            return 0;
        }

        printf("Name: %s | Gender: %s\n", person.name, genderToString(person.gender));
    }

    return 0;
}
