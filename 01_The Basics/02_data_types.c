#include <stdio.h>

int main() {
    // Before jumping into data types let us explore format specifiers in c language

    // In C programming, a format specifier is a special code that begins with a percentage sign (%) and is used in functions like printf and scanf to indicate the type and format of the data that will be printed or read. Format specifiers are placeholders that define the expected type of the corresponding argument.

    // int integerVar = 42;
    // float floatVar = 3.14;
    // char charVar = 'A';
    // char strVar[] = "Hello, World!";

    // // Using format specifiers to print values
    // printf("Integer: %d\n", integerVar);
    // printf("Float: %f\n", floatVar);
    // printf("Character: %c\n", charVar);
    // printf("String: %s\n", strVar);

    // here %d is to tell that the data type is expected to be integer
    // here %f is to tell that the data type is expected to be float
    // here %c is to tell that the data type is expected to be character
    // here %s is to tell that the data type is expected to be string

    // Integer types
    int integerVar;
    short shortVar;
    long longVar;
    long long longLongVar;

    // Floating-point types
    float floatVar;
    double doubleVar;
    long double longDoubleVar;

    // Character types
    char charVar;

    // Other types
    _Bool boolVar;

    // Print sizes of integer types
    printf("Size of int: %lu bytes\n", sizeof(integerVar));
    printf("Size of short: %lu bytes\n", sizeof(shortVar));
    printf("Size of long: %lu bytes\n", sizeof(longVar));
    printf("Size of long long: %lu bytes\n", sizeof(longLongVar));

    // Print sizes of floating-point types
    printf("Size of float: %lu bytes\n", sizeof(floatVar));
    printf("Size of double: %lu bytes\n", sizeof(doubleVar));
    printf("Size of long double: %lu bytes\n", sizeof(longDoubleVar));

    // Print size of character type
    printf("Size of char: %lu byte\n", sizeof(charVar));

    // Print size of boolean type
    printf("Size of _Bool: %lu byte\n", sizeof(boolVar));

    return 0;
}
