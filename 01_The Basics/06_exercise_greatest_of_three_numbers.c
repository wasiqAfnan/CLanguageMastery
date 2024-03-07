// Problem Statement: User will enter 3 numbers and our task is to find and print the graetest among these 3 number
#include <stdio.h>

int main() {
    // Declare three variables to store user input
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");

    // Read the user inputs
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check the conditions to find the greatest number using nested if-else statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            // num1 is the greatest
            printf("The greatest number is: %d\n", num1);
        } else {
            // num3 is the greatest
            printf("The greatest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            // num2 is the greatest
            printf("The greatest number is: %d\n", num2);
        } else {
            // num3 is the greatest
            printf("The greatest number is: %d\n", num3);
        }
    }

    return 0;
}
