#include <stdio.h>

void show(int *ptr, int n){

    for (int i=0; i<n; i++){
        printf("%d",*(ptr+i));
        if(i==2){
            printf("\n");
        }
    }
    
}
void main(){
    int arr[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("enter the number for %d row and %d coloumn number ",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    show(&arr[0][0], 6);
}