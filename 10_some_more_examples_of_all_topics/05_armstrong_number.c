/*
An Armstrong number, is a number that is equal to the sum of its own digits each raised to the power of the number of digits in the number itself.
e.g. 153 =  1 ^3 + 5^3 + 3^3 = 153 is an armstrong number
*/
#include <stdio.h>
#include <math.h>

void main(){
    int number, val, armstrong = 0, remainder, digit = 0;

    printf("Enter your number: ");
    scanf("%d", &number);
    val = number;

    // extracting number of digits
    while (val != 0){
        val = val / 10;
        digit++;
    }

    val = number;
    while (val != 0){
        remainder = val % 10;
        armstrong = armstrong + pow(remainder, digit);
        val = val / 10;
    }

    if (number == armstrong){
        printf("%d is an armstrong number", number);
    }
    else{
        printf("%d is not an armstrong number", number);
    }
}