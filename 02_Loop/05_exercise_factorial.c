#include <stdio.h>

void main(){
    int factorial=1,num,i=1;
    printf("Enter the number to get the addition of the table of the number: ");
    scanf("%d",&num);
    while(i<=num){
        factorial = factorial*i;
        printf("%d*",i);
        i++;
    }
    printf("\b=%d",factorial);
}