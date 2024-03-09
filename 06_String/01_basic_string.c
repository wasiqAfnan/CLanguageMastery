#include <stdio.h>

void main(){
    char c[] = {'A', 'F', 'N', 'A', 'N', '\0'}; //FIRST METHOD

    char *ptr = &c[0];

    //printing string first way

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    //printing string second way or (convenient way)
    char d[] = "AFNAN"; //SECOND METHOD (convenient way)

    printf("%s", d);
    printf("\n");

    //TAKING INPUT AS STRING FROM USER AND THEN PRINT IT

    int a[15];
    printf("Enter your name : ");
    scanf("%s",&a[0]);
    printf("Your name is %s",&a[0]);
}