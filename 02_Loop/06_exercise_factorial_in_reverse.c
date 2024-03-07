#include <stdio.h>

void main(){
    int fact,i,n;
    printf("Enter the number to get the addition of the table of the number: ");
    scanf("%d",&n);
    fact=1;
    for(i=n;i>=1;i--){
        fact=fact*i;
        printf("%d*",i);
    }
    printf("\b=%d",fact);
}