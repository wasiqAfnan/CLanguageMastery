#include <stdio.h>

/*
In this project I am firstly going to take a string input form user an then perform some calculation on strin gso that we can encrypt the string after this we prompt the user if they want to decrypt the encryoted text or not. If yes then decrpt it else exit the program.
*/

void encrypt(char ptr[]){
    while (*ptr != '\0'){
        // adding +1 to each character so that it can change its original form
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char *ptr){
    while (*ptr != '\0'){
        // subtracting -1 from each character so that it can revert to its original form
        *ptr = *ptr - 1;
        ptr++;
    }
}

void main(){
    char arr[20], ch;
    // taking normal string input from user
    printf("Put your string here that you want to encrypt : ");
    gets(arr);
    // calling the encrypt function
    encrypt(arr);
    printf("your enrypted text is: %s\n", arr);

    // prompting user if they want to decrypt the text or not
    printf("Do you want to decrypt the string that youe have given earlier(y/n): ");
    scanf("%c", &ch);
    if (ch == 'y'){
        // calling decrypt function if 'y' is pressed
        decrypt(arr);
    }
    else{
        exit(0);
    }
    printf("your decrypted text is: %s\n", arr);
}