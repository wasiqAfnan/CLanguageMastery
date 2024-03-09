#include<stdio.h>
#include<stdlib.h>

void main(){
    // The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime. C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.

    // malloc(memory allocation) is used to allocate memory in runtime and this funtion does not initialize any value to the memory lcation. It means the default value of these memory location is gharbage value.

    // declaring a pointer
    float *ptr;
    // allocating memory to a pointer using malloc()
    ptr = (float *) malloc(4 * sizeof(float));

    // we can use the pointer just like an array
    // getting element from the user and storing it in ptr
    for(int i = 0 ; i<4; i++){
        printf("enter the value of %d elements: ",i+1);
        scanf("%f", &ptr[i]);
    }

    // printing values
     for(int i = 0 ; i<4; i++){
        printf("the value of %d elements is %.2f \n: ",i+1, ptr[i]);
    }
}