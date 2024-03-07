#include <stdio.h>

void occurance(char *exe, char n)
{
    int count = 0;
    while (*exe != '\0')
    {
        if (*exe == n)
        {
            count++;
        }
        exe++;
    }
    printf("%d",count);
}
void main()
{
    char arr[] = {"happy"};
    occurance(arr, 'p');
}