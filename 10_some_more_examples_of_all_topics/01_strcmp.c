#include <stdio.h>

// Function to compare two strings
int strCompare(char s1[], char s2[], int l1, int l2) {
    // Iterate through the characters of both strings
    for (int i = 0; i < l1; i++) {
        // If characters are not equal, return -1
        if (s1[i] != s2[i]) {
            return -1;
        }
    }

    // If all characters are equal, return 0
    return 0;
}

// Main function
void main() {
    char s1[20], s2[20];
    printf("Enter first string: ");
    gets(s1); // Input first string

    printf("Enter second string: ");
    gets(s2); // Input second string

    int length1 = strlen(s1); // Calculate length of first string
    int length2 = strlen(s2); // Calculate length of second string

    // Call strCompare function to compare strings
    int res = strCompare(s1, s2, length1, length2);

    // Print result based on comparison
    if (res == -1) {
        printf("Strings are not equal\n");
    } else {
        printf("Strings are equal\n");
    }
}
