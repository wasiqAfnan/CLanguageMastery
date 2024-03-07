#include<stdio.h>

void main(){
    FILE *ptr1,*ptr2;
    ptr1 = fopen("changenumber.txt","r");
    int a;
    fscanf(ptr1,"%d",&a);
    ptr2 = fopen("changenumber.txt","w");
    fprintf(ptr2,"%d",a*2);
}