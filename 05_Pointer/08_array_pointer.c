#include <stdio.h>

void func(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("the value of arr[%d] is %d\n",i, *(ptr+i));
    }
}

void main(){
    int arr[]={1,25,36,45,87};
    func(arr, 5);
}

