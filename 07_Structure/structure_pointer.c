#include<stdio.h>

struct student{
    int code;
};

void main(){
    struct student e1;
    struct student *ptr;
    ptr = &e1;

    (*ptr).code = 101;
    ptr->code = 101;    //'->' this is a arrow operatpor and another method to assign any value to pointer
    printf("%d\n",e1.code);
    printf("%d\n",ptr->code);
    printf("%d",(*ptr).code);
}