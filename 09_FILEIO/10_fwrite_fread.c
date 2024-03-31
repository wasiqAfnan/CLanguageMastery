#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

/*
    This program demonstrates reading and writing employee details to a file using structure and file I/O functions.
*/

typedef struct emp {
    int empid;
    float salary;
    char name[20];
} emp;

void main() {
    emp e[3], data; // Array of emp structures to store employee details
    FILE *ptr; // File pointer
    
    ptr = fopen("data.txt", "w"); // Open file for writing
    printf("Enter the details of 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        fflush(stdin); // Flush input buffer
        printf("Enter the name: ");
        gets(e[i].name); // Read employee name
        printf("Enter the salary: ");
        scanf("%f", &e[i].salary); // Read employee salary
        printf("Enter id: ");
        scanf("%d", &e[i].empid); // Read employee ID
    }
    fwrite(e, sizeof(struct emp), 3, ptr); // Write employee details to file
    fclose(ptr); // Close the file
    
    ptr = fopen("data.txt", "r"); // Reopen file for reading
    while (!feof(ptr)) { // Read employee details until end of file
        fread(&data, sizeof(struct emp), 1, ptr); // Read employee details from file
        printf("%s\t%d\t%f\n", data.name, data.empid, data.salary); // Print employee details
    }
    fclose(ptr); // Close the file
}
