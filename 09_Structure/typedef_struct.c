#include<stdio.h>
#include<string.h>

typedef struct employee {
    char name [20];
}emp;

void main(){
    emp e1;
    strcpy(e1.name, "Rohan");
    printf("%s",e1.name); 
}