/*
    Introduction to File Input/Output (I/O) in C:

        In C programming, file input/output (I/O) operations allow us to work with files.
        The <stdio.h> header file provides functions and macros for file I/O operations.

        Key functions for file I/O:
        - fopen(): Opens a file and returns a pointer to a FILE structure.
        - fclose(): Closes a file.
        - fprintf(): Writes formatted data to a file.
        - fscanf(): Reads formatted data from a file.
        - fputc(), fputs(): Writes characters or strings to a file.
        - fgetc(), fgets(): Reads characters or strings from a file.

        File modes used with fopen():
        - "r": Opens a file for reading.
        - "w": Opens a file for writing. If the file exists, its contents are erased.
        - "a": Opens a file for appending. Data is written at the end of the file.
        - "r+": Opens a file for both reading and writing.
        - "w+": Opens a file for both reading and writing, erasing its contents.
        - "a+": Opens a file for both reading and appending.

*/
#include<stdio.h>

void main(){
    FILE *ptr; // Pointer to FILE structure for file operations
    int num1, num2; // Variables to store numbers read from file
    
    ptr = fopen("sample.txt", "r"); // Opening file in read mode ("r")
    // Reading two integers from the file
    fscanf(ptr, "%d", &num1); 
    fscanf(ptr, "%d", &num2);
    fclose(ptr); // Closing the file
    
    // Printing the values read from the file
    printf("The value of num1 is : %d\n", num1);
    printf("The value of num2 is : %d", num2);
}
