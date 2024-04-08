// 1+2+3+4+...+n

#include <stdio.h>
#include <conio.h>

void main(){
    int n,sum=0;
    // getting input in n
    printf("Enter the number: ");
    scanf("%d",&n);

    // Calculating the sum of upto n numbers
    for(int i = 1; i <= n; i++){
        sum += i;
        printf("%d+",i);
    }

    printf("\b=%d",sum);
}