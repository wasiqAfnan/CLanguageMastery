#include <stdio.h>

void main()
{
    // declare and initializing an array
    int arr[] = {25, 67, 87, 45, 12, 16, 1, 100};
    int  n, flag = 0, index, pos;
    // taking number from user to search for the number in the array
    printf("Enter a number you want to search? ");
    scanf("%d", &n);

    // looping through each element in the array
    for(int i=0;i<8;i++){
        // comparing the number with every element in the array one after another
        if(arr[i] == n){
            flag = 1;
            index = i;
            pos = i+1;
            break;
        }
    }

    // Checking flag value and printing the results
    if(flag == 1){
        printf("%d is present in the array %d index and in %d position",n,index,pos);
    }
    else{
        printf("%d is not present in the array",n);
    }

}