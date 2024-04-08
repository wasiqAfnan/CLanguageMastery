// a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

#include <stdio.h>

void main(){
    int number, divisorSum = 0;
    printf("Enter binary number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++){
        if(number % i == 0){
            divisorSum = divisorSum + i;
        }
    }

    if(divisorSum == number){
        printf("%d is a perfect number", number);
    }
    else{
        printf("%d is not a perfect number", number);
    }
}