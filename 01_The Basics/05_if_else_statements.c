#include <stdio.h>

int main() {
    // There are 4 types of if-else statements in c programming
    /*
    1) if statement
    2) if-else statement
    3) if-else if ladder statement
    4) nested if-else statement
    */

    int number;

    // Simple if statement
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    }

    // If-else statement
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // If-else if ladder
    if (number < 0) {
        printf("The number is negative.\n");
    } else if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Nested if-else statement
    if (number > 10) {
        if (number % 5 == 0) {
            printf("The number is greater than 10 and divisible by 5.\n");
        } else {
            printf("The number is greater than 10 but not divisible by 5.\n");
        }
    } else {
        printf("The number is not greater than 10.\n");
    }

    return 0;
}
