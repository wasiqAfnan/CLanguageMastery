#include <stdio.h>


void main(){
    int marks[4];
    int *ptr=&marks[0];
    for(int i=0; i<4; i++){
        printf("enter the value of %d student : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }

     for(int i=0; i<4; i++){
        printf("enter the value of %d student is %d \n",i+1,marks[i]);
    }

    
    

}