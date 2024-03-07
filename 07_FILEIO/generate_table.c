#include <stdio.h>

void main()
{
    FILE *ptr;
    int num;
    printf("what table you want : ");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, (num * i));
    }
    fprintf(ptr, "*****table ends*****");
    fclose(ptr);
}