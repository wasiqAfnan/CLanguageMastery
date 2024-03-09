#include<stdio.h>

// structure decalare and define
struct employee{
    int code;
    float salary;
    char name[20];
};

void main(){
    // creating structure variable and assigning values in the samelint
    struct employee e1 = {100, 1250.23, "afnan"};
    // printing the values
    printf("name = %s\n",e1.name);
    printf("code = %d\n",e1.code);
    printf("salary = %.2f\n",e1.salary);


    printf("\n\n");

    // creating second structure variable and assigning values in the samelint
    struct employee e2 = {101, 1450.23, "wasiq"};
    // printing the values
    printf("name = %s\n",e2.name);
    printf("code = %d\n",e2.code);
    printf("salary = %.2f\n",e2.salary);
}