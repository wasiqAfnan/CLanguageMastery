#include <stdio.h>

int main()
{
    // Declare a variable to store user input
    int n;

    // Prompt the user to enter a number
    printf("ENTER YOUR NUMBER \n");

    // Read the user input
    scanf("%d", &n);

    // Perform a divisibility test and print the result
    // If the result is 0, it means the number is divisible by 97
    // Otherwise, it is not divisible
    printf("DIVISIBILITY TEST : %d \n", n % 97);

    // Return 0 to indicate successful execution
    return 0;
}
