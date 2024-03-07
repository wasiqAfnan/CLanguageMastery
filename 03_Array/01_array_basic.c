#include <stdio.h>

void main() {
    // Declare an integer array 'num' with size 4
    int num[4];

    // Assign a value to the element at index 0 (arrays in C are zero-indexed)
    num[0] = 25;

    // Assign a value to the element at index 1 (arrays in C are zero-indexed)
    num[1] = 205;

    // Initialize the element at index 2, but its value is currently undefined
    num[2];

    // Assign values to the elements at indices 3 and 4
    num[3] = 56;
    num[4] = 85; // Note: Index 4 is out of bounds, as arrays in C are zero-indexed

    // Prompt the user to input a value for the element at index 2
    printf("Enter the value of array num[2]: ");
    scanf("%d", &num[2]);

    // Print the value of the element at index 2
    printf("Value of num[2]: %d", num[2]);

    // We can also combine array declaration and initialization in one line

    int arr[]={25,64,78,95};
}
