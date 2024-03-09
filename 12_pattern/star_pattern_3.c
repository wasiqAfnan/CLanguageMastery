#include<stdio.h>
#include<conio.h>

/*
    *
   **
  ***
 ****
*****
*/

void main(){
    int line;
    printf("For how many lines you want to print the star pattern : ");
    scanf("%d",&line);
    for(int i=0;i<line;i++){
        for(int j=0;j<line;j++){
            if(j<line-i-1){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    // Alternate approach

    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            if(i+j<=line){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

}