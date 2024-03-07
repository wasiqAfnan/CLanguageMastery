#include <stdio.h>

int factorial(int x);
void main(){
    int num = 5;
    int c=factorial(num);
    printf("%d\n",c);

}

int factorial(int x){
    
    if(x==1 || x==0){
        return 1;
    }
    else{
        int c = x*factorial(x-1);
        return c;
    }
}