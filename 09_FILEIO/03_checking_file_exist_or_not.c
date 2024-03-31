#include<stdio.h>

void main(){
    FILE *ptr; // File pointer
    int a, b; // Variables to store integers read from the file
    
    ptr = fopen("sample.txt", "r"); // Open file for reading
    if(ptr == NULL){ // Check if file does not exist
        printf("This file does not exist\n");
    }
    else{
        // Read integers from the file
        fscanf(ptr, "%d", &a);
        fscanf(ptr, "%d", &b);
        // Print the values of integers
        printf("The value of a is : %d\n", a);
        printf("The value of b is : %d\n", b);
    }
    fclose(ptr); // Close the file
}