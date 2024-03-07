#include <stdio.h>

int change(int *x){
    *x=10*(*x);
    return 0;
}
void main(){
    int a=9;
    printf("the value of a is %d\n",a);
    change(&a);
    printf("the value of a after change is %d\n",a);
}