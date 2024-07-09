#include<stdio.h>

struct student{
    int code;
};

void main(){
    struct student e1;
    struct student *ptr;
    ptr = &e1;

    (*ptr).code = 101;// e1.code
    ptr->code = 101;    //'->' this is a arrow operator and another way to assign any value to structure pointer

    // all these below 3 lines will get the same output
    printf("%d\n",e1.code);
    printf("%d\n",ptr->code);
    printf("%d",(*ptr).code);
}