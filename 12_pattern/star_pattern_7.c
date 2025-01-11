#include <stdio.h>
/*
   *
  **
 ***
****

*/

int main() {
    int n = 4;  // Number of rows in the pattern

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
