#include <stdio.h>

void main(){
    int arr[2][3][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int l=0; l<4; l++){
                printf("the address of arr[%d][%d][%d] is %u\n",i,j,l,&arr[i][j][l]);
            }
        }
    }
}