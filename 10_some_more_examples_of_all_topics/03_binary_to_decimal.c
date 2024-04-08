// Binary to decimal
//11001 = 25

#include <stdio.h>
#include <math.h>

void main(){
    int decimal=0, binary, remainder, i=0;
    printf("Enter binary number: ");
    scanf("%d",&binary);

    int val = binary;
    while(val != 0){
        remainder = val % 10;
        decimal = decimal + remainder * pow(2,i);
        val = val / 10;
        i++;
    }

    printf("%d", decimal);
}