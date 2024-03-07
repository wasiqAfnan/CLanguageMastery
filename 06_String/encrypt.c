#include<stdio.h>

void encrypt(char ptr[]){
    while(*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

void main(){
    char arr[20];
    printf("Put your string here that you want to encrypt : ");
    gets(arr);
    encrypt(arr);
    printf("%s",arr);
}