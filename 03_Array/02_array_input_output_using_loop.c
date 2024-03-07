#include <stdio.h>


void main(){
    int marks[5];
    // taking input from user using for loop
    for(int i=0; i<5; i++){
        printf("enter marks of %d\n",i+1);
        scanf("%d",&marks[i]);
    }

    // Printing value of array using for loop
    for(int i=0; i<5; i++){
        printf("the marks of %d student is %d\n",i+1, marks[i]);
    }
}