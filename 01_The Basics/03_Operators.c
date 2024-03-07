#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Relational operators
    printf("\nRelational Operators:\n");
    printf("Equal to: %d\n", a == b); // Equal to Equal to operator
    printf("Not equal to: %d\n", a != b); // Not equal to operator
    printf("Greater than: %d\n", a > b); // Greater than oprator
    printf("Less than: %d\n", a < b); // Less than operator
    printf("Greater than or equal to: %d\n", a >= b); // Greater than or equal to operator
    printf("Less than or equal to: %d\n", a <= b); // Less than or equal to operator

    // Logical operators
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("Logical AND: %d\n", x && y); // Logical and (return true if all conditions are true else returns false)
    printf("Logical OR: %d\n", x || y); // Logical or (return true if any one condition is true else returns false)
    printf("Logical NOT for x: %d\n", !x); // Logical not (chnage true to false and false to true)
    printf("Logical NOT for y: %d\n", !y);


    // Assignment operators
    printf("\nAssignment Operators:\n");
    int c = 15;
    printf("Original value of c: %d\n", c);
    c += 5; // c+=5 is same as writing c=c+5
    printf("c += 5: %d\n", c);
    c -= 3;// c-=5 is same as writing c=c-5
    printf("c -= 3: %d\n", c);
    c *= 2;// c*=5 is same as writing c=c*5
    printf("c *= 2: %d\n", c);
    c /= 4;// c/=5 is same as writing c=c/5
    printf("c /= 4: %d\n", c);

    // Conditional (Ternary) operator
    printf("\nConditional Operator:\n");
    // int varName = condition ? Value if true: Value if false;
    int result = (a > b) ? a : b;
    printf("The larger value between a and b is: %d\n", result);

    return 0;
}
