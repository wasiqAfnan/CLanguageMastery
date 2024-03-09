#include<stdio.h>
#include<conio.h>

/*

*****
****
***
**
*

*/

void main(){
    int line;
    printf("For how many lines you want to print the star pattern : ");
    scanf("%d",&line);

    /*for(int i=0;i<=line;i++){
        for(int j=0;j<=(line-i-1);j++){
            printf("*");
        }
        printf("\n");
    }*/

    // Alternate Approach

    for(int i=line;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}