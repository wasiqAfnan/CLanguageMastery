#include<stdio.h>

/*
    This program demonstrates reading a text file character by character using fgetc() function.
    It opens a file named "fgetc.txt" for reading and reads characters from it until the end of the file is reached.
    Each character read is printed to the console.

*/

void main(){
    FILE *ptr; // File pointer
    ptr = fopen("fgetc.txt", "r"); // Open file for reading
    char c = fgetc(ptr); // Read the first character from the file
    
    // Loop through the file until the end of the file is reached (EOF)
    while (c != EOF) {
        // Print the character to the console
        printf("%c", c);
        // Read the next character from the file
        c = fgetc(ptr);
    }
    fclose(ptr); // Close the file
}