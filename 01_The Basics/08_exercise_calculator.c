// problem Statement: We first give a menu to the user to whether they want to perform +,-,*,/. As user choose between these we need to take 2 number from user and perform the operation and also print the result

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    int num1, num2, result;

    // Display the menu options to the user
    printf("Choose your options\n");
    printf("1) For addition press \'+\'\n");
    printf("2) For subtraction press \'-\'\n");
    printf("3) For multiplication press \'*\'\n");
    printf("4) For division press \'/\'\n");
    printf("5) For exit press \'q\'\n\n");

    // Read the user's choice
    scanf("%c", &ch);

    // Perform the corresponding operation based on the user's choice
    switch (ch)
    {
        case '+':
            // Addition
            printf("Enter 2 numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;

        case '-':
            // Subtraction
            printf("Enter 2 numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;

        case '*':
            // Multiplication
            printf("Enter 2 numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("%d X %d = %d", num1, num2, result);
            break;

        case '/':
            // Division
            printf("Enter 2 numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 / num2;
            int result2 = num1 % num2;
            printf("Quotient of %d / %d = %d\n", num1, num2, result);
            printf("Remainder of %d / %d = %d\n", num1, num2, result2);
            break;

        case 'q':
            // Exit the program
            exit(0);

        default:
            // Handle the case when the user enters an invalid choice
            printf("Wrong Choice");
            exit(0);
    }
}
