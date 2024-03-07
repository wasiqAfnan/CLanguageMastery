// WAF that Reverse a String and function receives only one pointer and returns void

#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char *ptr){
    char *ptr2 = ptr;
    int len = 0;

    while(*ptr2 != '\0'){
        ptr2++;
        len++;
    }

    ptr2--;

    for(int i = 0; i < len/2; i++){
        char temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;

        ptr++;
        ptr2--;
    }
}

void main(){
    char str[] = "Saba";
    printf("The String is: ");
    puts(str);

    reverse(&str[0]);// calling function

    printf("The reversed String is: ");
    puts(str);
}