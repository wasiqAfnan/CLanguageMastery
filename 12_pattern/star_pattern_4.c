#include<stdio.h>
#include<conio.h>

/*

******
******
******
******
******

*/

void main(){
    int line;
    printf("For how many lines you want to print the star pattern : ");
    scanf("%d",&line);
    
    for(int i=0;i<=line;i++){
        for(int j=0;j<=6;j++){
            printf("*");
        }
        printf("\n");
    }
}