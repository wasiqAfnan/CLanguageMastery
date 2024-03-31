#include <stdio.h>
#include <conio.h> // Library for console I/O (for non-standard conio.h functions)
#include <string.h>
#include <stdlib.h>

/*
    This program demonstrates the usage of fseek(), ftell(), and rewind() functions for file handling in C.
    It prompts the user to enter their name, writes it to a file named "seek.txt", and then performs seek operations on the file.

    - fseek(): This function is used to move the file position indicator to a specified location in the file.   It takes three arguments: the file pointer, the offset from the origin, and the origin (SEEK_SET for beginning of file, SEEK_CUR for current position, SEEK_END for end of file).
    - ftell(): This function returns the current value of the file position indicator of the given file pointer.
    - rewind(): This function is used to move the file position indicator to the beginning of the file. It is equivalent to calling fseek() with offset 0 and origin SEEK_SET.
*/

void main()
{
    FILE *ptr; // File pointer
    char name[30], get_name[30]; // Arrays to store user's name and retrieved name
    
    // Prompt user to enter their name
    printf("Enter your name: ");
    scanf("%[^\n]", name); // Read name including spaces until newline character
    
    ptr = fopen("seek.txt", "w"); // Open file for writing
    fprintf(ptr, "%s", name); // Write the name to the file
    fclose(ptr); // Close the file

    ptr = fopen("seek.txt", "r"); // Open file for reading
    int pos = ftell(ptr); // Get current position of file pointer
    printf("%d\n", pos); // Print current position to console
    fseek(ptr, 8, SEEK_SET); // Move file pointer to 8th byte from beginning of file
    fscanf(ptr, "%[^\n]", get_name); // Read name from file
    printf("%s\n", get_name); // Print retrieved name to console
    pos = ftell(ptr); // Get current position of file pointer
    printf("%d\n", pos); // Print current position to console
    rewind(ptr); // Move file pointer to beginning of file
    pos = ftell(ptr); // Get current position of file pointer
    printf("%d\n", pos); // Print current position to console

    fclose(ptr); // Close the file
}
