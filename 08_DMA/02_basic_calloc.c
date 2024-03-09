#include<stdio.h>
#include<stdlib.h>

void main(){
    // calloc(contiguous allocation) is used to allocate memory in runtime and this funtion initialize 0 value to the memory lcation. It means the default value of these memory location is 0
    
    int *ptr;
    int n;
    printf("how many chararcters of your first name : ");
    scanf("%d",&n);
    // allocating memory using calloc()
    ptr = (int *) calloc(n, sizeof(char));
    
    // getting values form user
    for(int i = 0 ; i<n; i++){
        printf("enter the value of %d elements: ",i+1);
        scanf("%d", &ptr[i]);
    }

    // printing values
     for(int i = 0 ; i<n; i++){
        printf("the value of %d elements is %d \n: ",i+1, ptr[i]);
    }
}