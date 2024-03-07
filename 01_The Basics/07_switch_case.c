#include <stdio.h>

int main()
{
    // Declare a variable to store the day number
    int dayNumber;

    // Prompt the user to enter a day number
    printf("Enter a day number (1-7): ");
    scanf("%d", &dayNumber);

    // Use switch statement to determine the day name based on the day number
    switch (dayNumber)
    {
    // case 1 will run if user enters 1 in the input
    case 1:
    {
        printf("Sunday\n");
        break;
    }
    // case 2 will run if user enters 1 in the input
    case 2:
    {
        printf("Monday\n");
        break;
    }
    // case 3 will run if user enters 1 in the input
    case 3:
    {
        printf("Tuesday\n");
        break;
    }
    // case 4 will run if user enters 1 in the input
    case 4:
    {
        printf("Wednesday\n");
        break;
    }
    // case 5 will run if user enters 1 in the input
    case 5:
    {
        printf("Thursday\n");
        break;
    }
    // case 6 will run if user enters 1 in the input
    case 6:
    {
        printf("Friday\n");
        break;
    }
    // case 7 will run if user enters 1 in the input
    case 7:
    {
        printf("Saturday\n");
        break;
    }
    default:
        // Handle the case when the input is not a valid day number
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
        break;
    }

    return 0;
}
