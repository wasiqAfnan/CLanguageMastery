#include <stdio.h>

// when a function callitself again and again for finite number of times it is called recursion.
int firstn(int x);
void main(){
    int n=6;
    int res=firstn(n);
    printf("%d",res);
}

int firstn(int x){
    int c;
    if(x==1 || x==0){
        return 1;
    }else{
        c=(firstn(x-1))+x;
        return c;
    }
}