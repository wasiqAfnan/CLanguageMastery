#include <stdio.h>

int fabonacci(int x);
void main(){
    int num1=6;
    int c= fabonacci(num1);
    printf("%d",c);
}
int fabonacci(int x){
    int c;
    if(x==1 || x==2){
        return 1;
    }else{
         c=(fabonacci(x-1))+(fabonacci(x-2));
        return c;
    }
}