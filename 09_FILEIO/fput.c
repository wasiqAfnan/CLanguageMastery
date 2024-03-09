#include<stdio.h>

void main(){
    FILE *ptr;
    ptr = fopen("putc.txt","w");
    fputc('g',ptr);
    fputc('o',ptr);
    fputc('o',ptr);
    fputc('d',ptr);
}