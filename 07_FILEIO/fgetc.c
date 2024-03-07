#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("fgetc.txt", "r");
    char c = fgetc(ptr); //fgetc read a txt file character by character
    //printf("%c",c);

    while (c != EOF)
    { //EOF stands for "end of the file"
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}