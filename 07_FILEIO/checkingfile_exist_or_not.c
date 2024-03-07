#include<stdio.h>

void main(){
    FILE *ptr;
    int a,b;
    ptr = fopen("sample.txt", "r");
    if(ptr == NULL){
        printf("this file does not exist\n");
    }
    else{
        fscanf(ptr, "%d",&a);
        fscanf(ptr, "%d",&b);
        printf("the vale of a is : %d\n",a);
        printf("the vale of b is : %d\n",b);
        
    }
    fclose(ptr);
}