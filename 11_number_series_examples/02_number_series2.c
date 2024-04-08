// 1+2-3+4-5+6-7...

#include <stdio.h>

void main(){
    int n, sum = 1, symb = -1;
    // getting input in n
    printf("Enter the number: ");
    scanf("%d", &n);

    // Calculating the sum of upto n numbers
    for (int i = 2; i <= n; i++)
    {
        symb *= -1;
        sum = sum + i * symb;
    }
    printf("%d", sum);
}
