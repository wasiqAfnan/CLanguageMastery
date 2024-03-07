#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float marks;
    char name[20];
};

void show(struct student *n){
    printf("Roll = %d\n", (*n).roll);
    printf("Marks = %f\n", (*n).marks);
    printf("Name = %s\n", (*n).name);
    n->marks = 30.00;

}

void main(){
    struct student s1 = {1, 21.5, "Rohan"};
    struct student *ptr;
    ptr = &s1;
    show(ptr);
    printf("Updated Marks = %f", s1.marks);
}