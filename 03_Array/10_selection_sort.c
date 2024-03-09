#include <stdio.h>

void main()
{
    int arr[] = {70,87,102,54,12,4,45};
    int size = 7;

    printf("Before applying selction sort:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // selection sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("After applying selction sort:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}