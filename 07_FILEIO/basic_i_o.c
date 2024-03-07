#include<stdio.h>

void main(){
    FILE *ptr;
    int num1,num2;
    ptr = fopen("sample.txt", "r"); //reading file
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);//closing file
    printf("The value of num is : %d\n",num1);
    printf("The value of num is : %d",num2);
}