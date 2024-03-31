#include <stdio.h>

/*
    This program collects information for two entries (name and salary) from the user and writes it to a file named "output.txt".
*/

void main()
{
    FILE *ptr; // File pointer
    ptr = fopen("output.txt", "w"); // Open "output.txt" for writing
    
    for (int i = 0; i < 2; i++)
    {
        printf("What is your name? ");
        char c[20]; // Array to store name
        gets(c); // Getting user input and storing it in a variable
        printf("What is your salary? ");
        int a; // Variable to store salary
        scanf("%d", &a); // Read salary from user
        fprintf(ptr, "name = %s, salary = %d\n", c, a); // Write name and salary to file
    }
}
