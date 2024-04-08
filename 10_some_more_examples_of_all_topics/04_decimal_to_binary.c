// decimal to binary
// 64 = 1 0 0 0 0 0 0

#include <stdio.h>

void main(){
    int number, arr[100], i = 0, n = 1, binary = 0, remainder;
    printf("Enter Decimal number: ");
    scanf("%d", &number);

    int val = number;

    // while (val != 0){
    //     int temp = val % 2;
    //     val = val / 2;
    //     arr[i] = temp;
    //     i++;
    // }

    // for (i = i - 1; i >= 0; i--){
    //     printf("%d", arr[i]);
    // }

    /*
        Another method (more optimized)
    */

    while(val != 0){
        remainder = val % 2;
        binary += remainder * n;
        val = val / 2;
        n *= 10;
    }

    printf("%d",binary);

}
