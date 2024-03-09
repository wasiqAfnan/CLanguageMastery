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
    struct student s1; // declaring variable of type structure student
    // assigning or initializing value to the structure variable using '.'(dot) operator
    s1.roll = 24;
    strcpy(s1.name, "afnan"); // char array or string type wil be initialized in this manner
    s1.result = 70.5; 

    // printing the values of structure
    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%.2f\n", s1.result);
}



