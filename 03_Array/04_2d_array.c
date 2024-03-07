#include <stdio.h>

void main(){
    int students=3,subjects=5;

    int arr[3][5];

    for(int i=0; i<students; i++){
        printf("enter the marks of %d student\n\n",i+1);
        for(int j=0; j<subjects; j++){
            printf("enter the marks of %d subjects ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n\n\n\n");

    for(int i=0; i<students; i++){
        printf("the marks of %d student is below\n\n",i+1);
        for(int j=0; j<subjects; j++){
            printf("the marks of %d subjects is %d\n ",j+1,arr[i][j]);
        }
    }



}