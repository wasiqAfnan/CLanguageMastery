#include <stdio.h>

int display();// function declaration
int main(){
    printf("initializing display function\n");
    display();// calling function
    printf("display function end\n");
    return 0;
}

// function defination
int display(){
    printf("this is display function\n");
    return 0;
}