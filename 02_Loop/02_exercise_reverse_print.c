#include <stdio.h>

void main(){
    int a;
    printf("enter the number : ");
    scanf("%d\n",&a);

    do{
        printf("%d\n",a);
        a--;
    }while(a>=0);
}