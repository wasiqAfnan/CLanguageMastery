#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void main(){
    struct employee e1 = {100, 1250.23, "afnan"};
    printf("name = %s\n",e1.name);
    printf("code = %d\n",e1.code);
    printf("salary = %.2f\n",e1.salary);


    printf("\n\n");

    
    struct employee e2 = {101, 1450.23, "wasiq"};
    printf("name = %s\n",e2.name);
    printf("code = %d\n",e2.code);
    printf("salary = %.2f\n",e2.salary);
}