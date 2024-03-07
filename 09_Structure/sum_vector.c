#include <stdio.h>

struct vector
{
    int x;
    int y;
};

void sumfunc(struct vector b1, struct vector b2)
{
    struct vector  sum;

    sum.x = b1.x + b2.x;
    sum.y = b1.y + b2.y;

    printf("sum of 2 vectors of x axis is : %d\n", sum.x);
    printf("sum of 2 vectors of y axis is : %d\n", sum.y);
}

void main()
{
    struct vector a1, a2;
    a1.x = 10;
    a1.y = 20;

    a2.x = 30;
    a2.y = 40;
    sumfunc(a1, a2);
}