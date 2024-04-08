// 1/2 + 2/4 + 3/8 + 4/16 + ...

#include <stdio.h>

void main(){
    int n;
    float sum = 0.0;
    // getting input in n
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i / pow(2,i));
    }
    printf("%.2f",sum);
}