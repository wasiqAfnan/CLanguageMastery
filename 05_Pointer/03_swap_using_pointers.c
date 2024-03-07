#include <stdio.h>
void swap(int *x, int *y);
void main(){
    int a=9,b=11;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}