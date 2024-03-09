#include <stdio.h>
#include <string.h>

struct student //declaring structure
{
    int roll;
    char name[10];
    float result;
};
//using variable to structure

/*void main()
{
    struct student s1; // initializing values to structure
    s1.roll = 24;
    strcpy(s1.name, "afnan");
    s1.result = 70.5; 

    printf("%d\n", s1.roll); // printing the values of structure
    printf("%s\n", s1.name);
    printf("%.2f\n", s1.result);
}*/



//using array to structure

void main()
{
    struct student all[100]; // initializing values to structure
    all[0].roll = 25;
    strcpy(all[0].name, "wasiq");
    all[0].result = 80.5; 

    printf("%d\n", all[0].roll); // printing the values of structure
    printf("%s\n", all[0].name);
    printf("%.2f\n", all[0].result);

    all[1].roll = 24;
    strcpy(all[1].name, "afnan");
    all[1].result = 70.5; 

    printf("%d\n", all[1].roll); // printing the values of structure
    printf("%s\n", all[1].name);
    printf("%.2f\n", all[1].result);
}