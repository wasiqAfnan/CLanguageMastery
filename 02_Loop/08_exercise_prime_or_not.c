#include <stdio.h>

void main(){
    int num=45, i,test=0;
    for (i=2; i<num; i++){
        if(num%i==0){
            test = 1;
            break;
        }
    }
    if(test == 1 && num != 2){
        printf("%d is not a prime number", num);
    }
    else{
        printf("%d is a prime number", num);
    }
    
}