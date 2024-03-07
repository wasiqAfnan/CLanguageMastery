#include <stdio.h>
void main(){
    int table,num,sum=0;
    printf("Enter the number to get the addition of the table of the number: ");
    scanf("%d",&num);
    for(int i=1; i<=10; i++){
        table = num*i;
        sum = sum + table;
    }
    printf("%d",sum);
}