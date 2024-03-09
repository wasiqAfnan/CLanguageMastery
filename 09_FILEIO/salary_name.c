#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("output.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        printf("what is your name? ");
        char c[20];
        gets(c);
        printf("what is your salary? ");
        int a;
        scanf("%d", &a);
        fprintf(ptr, "name = %s, salary = %d\n", c, a);
    }
}