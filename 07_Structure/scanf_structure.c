#include<stdio.h>

typedef struct complex{
    int main;
    int imagine;
}comp;

void show(comp arr[10]){
    int i;
    for(i=0; i<5; i++){
        printf("Value of %d for x axis is : %d\n",i+1,arr[i].main);
        printf("Value of %d for y axis is : %d\n",i+1,arr[i].imagine);
    }

}

void main(){
    comp arr[5];
    int i;
    for(i=0; i<5; i++){
        printf("put the value for %d number for real part : ",i+1);
        scanf("%d",&arr[i].main);

        printf("put the value for %d number for integer part : ",i+1);
        scanf("%d",&arr[i].imagine);
    }

    show(arr);
}