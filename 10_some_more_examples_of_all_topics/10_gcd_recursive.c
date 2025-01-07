#include <stdio.h>

// Function to find GCD using recursion
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    return gcd_recursive(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("GCD (Recursive) of %d and %d is: %d\n", num1, num2, gcd_recursive(num1, num2));
    return 0;
}