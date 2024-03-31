#include<stdio.h>

void main(){
    FILE *ptr; // File pointer
    ptr = fopen("generat.txt", "w"); // Open file for writing
    int r = 98; // Integer variable
    // Writing formatted data to the file
    fprintf(ptr, "the number is %d\n", r);
    fprintf(ptr, "the number has printed");
    fclose(ptr); // Close the file
}