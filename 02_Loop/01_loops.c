/*
    there are 3 types of loops in c 
    1) For loop
    2) While loop
    3) Do-While loop
*/
#include <stdio.h>

int main() {
    // For Loop
    printf("For Loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // While Loop
    printf("While Loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // Do-While Loop
    printf("Do-While Loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    return 0;
}
