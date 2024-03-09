#include <stdio.h>
#include <stdlib.h>

void main(){
    // realloc is used to re-allocate a memory location. So that we can increase or decrease the size of an array
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(char)); // allocating memory of size 4

    // getting user input
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // printing values
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d elements is %d \n: ", i + 1, ptr[i]);
    }

    // reallocating ptr size old = 4 , new = 6
    ptr = realloc(ptr, 6 * sizeof(int)); 

    // getting user input
    for (int i = 0; i < 6; i++)
    {
        printf("enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    // printing values
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d elements is %d \n: ", i + 1, ptr[i]);
    }
}