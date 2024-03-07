#include <stdio.h>

void main(){
    int n1=0,n2=1,n3,i=2;
        printf("%d \t%d",n1,n2);
    for(i=2; i<=10; i++){
        n3=n1+n2;
        printf("\t%d",n3);
        n1=n2;
        n2=n3;
    }
}
