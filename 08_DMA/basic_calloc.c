#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    int n;
    printf("how many chararcters of your first name : ");
    scanf("%d",&n);
    ptr = (int *) calloc(n, sizeof(char));
    
    for(int i = 0 ; i<n; i++){
        printf("enter the value of %d elements: ",i+1);
        scanf("%d", &ptr[i]);
    }


     for(int i = 0 ; i<n; i++){
        printf("the value of %d elements is %d \n: ",i+1, ptr[i]);
    }
}