#include<stdio.h>

void decrypt(char *ptr){
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

void main(){
    char arr[20];
    printf("Put your string that you want to decrypt : ");
    gets(arr);
    decrypt(arr);
    printf("%s",arr);
}