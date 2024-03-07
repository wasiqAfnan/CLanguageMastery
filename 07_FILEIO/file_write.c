#include<stdio.h>

void main(){
    FILE *ptr;
    ptr = fopen("generat.txt","w");
    int r  = 98;
    fprintf(ptr, "the number is %d\n",r);
    fprintf(ptr, "the number has printed");
    fclose(ptr);
}