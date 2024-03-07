#include<stdio.h>

void main(){
    FILE *ptr1,*ptr2;
    ptr1 = fopen("prac1.txt","r");
    ptr2 = fopen("a.txt","w");
    char c = fgetc(ptr1);

    while(c != EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
}