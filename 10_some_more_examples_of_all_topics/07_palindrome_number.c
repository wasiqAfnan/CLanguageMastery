#include <stdio.h>
#include <math.h>

void main(){
    int number, palindromeNumber = 0, val, remainder;

    printf("Enter your number: ");
    scanf("%d",&number);
    // Make a copy of the number entered by user
    val = number;

    while(val != 0){
        remainder = val % 10;
        palindromeNumber = palindromeNumber * 10 + remainder;
        val = val / 10;
    }

    if( number == palindromeNumber){
        printf("%d is a palindrome number", number);
    } 
    else{
        printf("%d is not a palindrome number", number);
    }
}


