#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(char));

    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d elements is %d \n: ", i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 6 * sizeof(int)); //reallocating ptr size old = 4 , new = 6

    for (int i = 0; i < 6; i++)
    {
        printf("enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d elements is %d \n: ", i + 1, ptr[i]);
    }
}