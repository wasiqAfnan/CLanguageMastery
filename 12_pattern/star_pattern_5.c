#include<stdio.h>
#include<conio.h>

/*
    *
   ***
  *****
 *******
*********

*/

void main(){
    int line;
    printf("For how many lines you want to print the star pattern : ");
    scanf("%d",&line);
    for(int i=0;i<line;i++){
        for(int j=0;j<line-i-1;j++){
            printf(" ");
        }

        for(int k=0;k<(2*i)+1;k++){
            printf("*");
        }
        printf("\n");
    }
}