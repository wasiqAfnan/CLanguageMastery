#include <stdio.h>

void main()
{
    /*
    There are many ways in which we can take the string as an input from user
    1) Usinf scanf without space
    2) Using scanf with spaces
    3) Using getChar()
    4) Using gets()
    */

    /*Using scanf without space*/

    //    char name[30];
    //    printf("Enter your name: ");
    //    // the below line will only read input until the first space occurs. When an space occurs it will not read input from terminal.
    //    // this is basically suitable where we are require to read only a single word
    //    scanf("%s",name); --> wasiq
    //    printf("%s",name);

    /*Using scanf with spaces*/

    // char name[30];
    // printf("Enter your name: ");
    // // the below line will read input until new line occurs and it is also capable to read the whole sentences. But it is not suitable for where multiple lines are taking input
    // scanf("%[^\n]", name);--> wasiq afnan
    // printf("%s", name);

    /*Using getChar()*/

    // char name[30],ch;
    // int i=0;
    // printf("Enter your name: ");
    // // the below line of code will read input until new line occurs and it is also capable to read the whole sentences. But it is not suitable for where multiple lines are taking input. But the difference between scanf and getChar() is that getChar() is only capable to read a single character from terminal taht is why we are required to call getChar() in loop and then storing each character enetred by the user to the name[] array.
    // while(ch != '\n'){
    //     ch=getchar(); 
    //     name[i]=ch;
    //     i++;
    // }
    // printf("%s", name);

    /*Using gets()*/

    char name[20];
    printf("Enter your name : ");
    // gets function is used to get an string input form user. it can read whole sentences.
    gets(name);
    printf("%s", name);

}