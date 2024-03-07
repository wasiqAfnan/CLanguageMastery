#include<stdio.h>
#include<stdlib.h>

void main(){
    float *ptr;
    ptr = (float *) malloc(4 * sizeof(float));

    for(int i = 0 ; i<4; i++){
        printf("enter the value of %d elements: ",i+1);
        scanf("%f", &ptr[i]);
    }


     for(int i = 0 ; i<4; i++){
        printf("the value of %d elements is %.2f \n: ",i+1, ptr[i]);
    }
}