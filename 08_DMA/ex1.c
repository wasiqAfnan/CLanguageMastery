#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    ptr = (int *) malloc(10* sizeof(int));

    for(int i = 1; i<=10; i++){
        ptr[i] = 7 * i;
        printf("%d X %d = %d\n",7,i,ptr[i]);
    }
    ptr = realloc(ptr, 15*sizeof(int));
    printf("\n\n\n");
    for(int i = 1; i<=15; i++){
        ptr[i] = 7 * i;
        printf("%d X %d = %d\n",7,i,ptr[i]);
    }
}