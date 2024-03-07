#include <stdio.h>

void main(){
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    // reversing the array
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    // prinitng the reversed array
    for(int j=0; j<n; j++){
        printf("%d",arr[j]);
    }
}
