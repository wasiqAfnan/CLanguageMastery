#include <stdio.h>

void table(int *ptr, int num, int n){
    for(int i=0; i<n; i++){
        ptr[i] = num*(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%d*%d=%d\n",num,i+1,ptr[i]);
    }
}
void main(){
    int m,n,num1,num2,num3;
    printf("how many rowns and coloumns do you want? ");
    scanf("%d %d",&m,&n);
    int arr[m][n];

    printf("for which number you want a multiplication table ");
    scanf("%d %d %d",&num1,&num2,&num3);

    table(arr[0], num1, n);
    table(arr[1], num2, n);
    table(arr[2], num3, n);
}