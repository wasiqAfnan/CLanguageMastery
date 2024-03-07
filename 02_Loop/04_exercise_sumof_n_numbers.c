#include <stdio.h>

void main(){
    int sum=0,i=0;
    // for loop
    /*for(int i=0; i<=10; i++){
        sum = sum+i;
    }
    printf("%d",sum);*/

    //do loop
    do {
        sum=sum+i;
        i++;
    }while (i<=10);
    printf("%d",sum);
}
