#include <stdio.h>

void main()
{
    int arr[3][10];
    int a = 2, b = 7, c = 9;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = a * (j + 1);
            }
        }
        else if (i == 1)
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = b * (j + 1);
            }
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = c * (j + 1);
            }
        }
    }






    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 10; j++)
            {
               printf("%d * %d = %d\n", a, j+1, arr[i][j]);
            }
            printf("\n \n");
        }
        
        else if (i == 1)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("%d * %d = %d\n", b, j+1, arr[i][j]);
            }
            printf("\n \n");
        }
       

        else
        {
            for (int j = 0; j < 10; j++)
            {
                printf("%d * %d = %d\n", c, j+1, arr[i][j]);
            }
            printf("\n \n");
        }
    }
}