#include<stdio.h>

/*
    This program demonstrates writing characters to a file using fputc() function.
    It creates a file named "putc.txt" and writes characters 'g', 'o', 'o', 'd' to it.
*/

void main(){
    FILE *ptr; // File pointer
    ptr = fopen("putc.txt", "w"); // Open file for writing
    // Write characters to the file using fputc()
    fputc('g', ptr);
    fputc('o', ptr);
    fputc('o', ptr);
    fputc('d', ptr);
    fclose(ptr); // Close the file
}
