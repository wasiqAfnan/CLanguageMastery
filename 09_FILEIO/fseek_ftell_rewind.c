#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *ptr;
    char name[30], get_name[30];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    ptr = fopen("seek.txt", "w");
    fprintf(ptr, "%s", name);
    fclose(ptr);

    ptr = fopen("seek.txt", "r");
    int pos = ftell(ptr);
    printf("%d\n", pos);
    fseek(ptr, 8, SEEK_SET);
    fscanf(ptr, "%[^\n]", get_name);
    printf("%s\n", get_name);
    pos = ftell(ptr);
    printf("%d\n", pos);
    rewind(ptr);
    pos = ftell(ptr);
    printf("%d\n", pos);
}