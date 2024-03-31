#include<stdio.h>

void main(){
    FILE *ptr1, *ptr2; // File pointers
    ptr1 = fopen("changenumber.txt", "r"); // Open file for reading
    int a; // Variable to store the integer read from the file
    fscanf(ptr1, "%d", &a); // Read integer from file
    fclose(ptr1); // Close the file
    
    ptr2 = fopen("changenumber.txt", "w"); // Open file for writing (erasing its contents)
    fprintf(ptr2, "%d", a * 2); // Write the doubled value of 'a' to the file
    fclose(ptr2); // Close the file
}