#include <stdio.h>

void present(char *ptr, char n)
{   int c=0;
    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            c++;
        }
        ptr++;
    }
    if(c==0){
        printf("the number is not present sorry!");
    }
    else{
        printf("the number is present!");
    }
}
void main()
{
    char arr[] = {"afnan"};
    char n;
    printf("what letter do you want to search? ");
    scanf("%c", &n);
    present(arr, n);
}