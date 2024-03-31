#include <stdio.h>

/*
    This program generates a multiplication table for a given number and writes it to a file named "table.txt".
    It prompts the user to input a number, then creates the multiplication table for that number and writes it to the file.
*/

void main(){
    FILE *ptr; // File pointer
    int num; // Variable to store the number for the table
    
    // Prompt user to input a number
    printf("Enter the number for the table: ");
    scanf("%d", &num);
    
    ptr = fopen("table.txt", "w"); // Open file for writing
    // Generate multiplication table and write to the file
    for (int i = 1; i <= 10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i, (num * i));
    }
    // Write end of table message
    fprintf(ptr, "***** Table ends *****");
    fclose(ptr); // Close the file
}
