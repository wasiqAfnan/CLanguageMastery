#include <stdio.h>
#include <string.h>

struct student //declaring structure
{
    int roll;
    char name[10];
    float result;
};


void main()
{
    // declaring array of type structure student
    struct student all[100];
    // initializing value of 0th index
    all[0].roll = 25;
    strcpy(all[0].name, "wasiq");
    all[0].result = 80.5; 

    // printing the values of structure
    printf("%d\n", all[0].roll); 
    printf("%s\n", all[0].name);
    printf("%.2f\n", all[0].result);

    // initializing value of 1st index
    all[1].roll = 24;
    strcpy(all[1].name, "afnan");
    all[1].result = 70.5; 

    // printing the values of structure
    printf("%d\n", all[1].roll); 
    printf("%s\n", all[1].name);
    printf("%.2f\n", all[1].result);
}