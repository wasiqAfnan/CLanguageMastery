#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    // Part 1: Print the triangular pattern
    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    // Part 2: Print the reverse triangular pattern
    for (int i = length; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}