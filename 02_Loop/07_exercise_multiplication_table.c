#include <stdio.h>

void main(){
    int num, table;
    printf("Enter the number you want the table of : ");
    scanf("%d\n",&num);
    //reverse order
    /*for(int i=10; i>=0; i-- ){
        table = num*i;
        printf("%d * %d = %d\n",num, i, table); 
    }*/
    //normal order
     for(int i=1; i<=10; i++ ){
        table = num*i;
        printf("%d * %d = %d\n",num, i, table); 
    }
}