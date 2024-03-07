#include <stdio.h>

int sum(int a, int b);

int main()
{
    int num1, num2;

    printf("Put the value of num1 and num2\n");
    scanf("%d\n %d", &num1, &num2);

    int result = sum(num1, num2);

    printf("the sum of num1 and num2 is %d\n", result);
    
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}