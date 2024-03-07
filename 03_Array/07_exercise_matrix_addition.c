#include <stdio.h>

void main()
{
    int rows, columns;
    printf("Enter the no of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    // defining matrix with the size given by the user
    int matrix1[rows][columns], matrix2[rows][columns],result[rows][columns];

    // take values of first matrix from user
    printf("Enter values for first matrix\n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter value for %d row and %d columns: ", i + 1, j + 1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    // take values of Second matrix from user
    printf("\nEnter values for second matrix\n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter value for %d row and %d columns: ", i + 1, j + 1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    // printin first matrix
    printf("\nFirst Matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    // printin second matrix
    printf("\nSecond Matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    // Adding the two matrix and storing the result in result array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j]=matrix1[i][j] + matrix2[i][j];
        }
        
    }

    // printin resultant matrix
    printf("\nResultant matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}