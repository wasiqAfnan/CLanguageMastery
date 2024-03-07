#include <stdio.h>
// pointer is a variable which hold the address of another variable. In other words we can say that a variable which points to another variable is called a pointer.
void main(){
    int i=4;
    int *j=&i; // j holds the address of i
    int **k=&j; // k holds the address of j
    printf("%d\n",i);
    printf("%d\n",*j); // '*' this operatpor in pointer is called value at operator. Which fetches the value of the variable whose address is hold by pointer variable. In this case *j is actually fetches the value at the address of i which is hold by j.
    printf("%u\n",&i);
    printf("%u\n",j);
    printf("%d\n",&j);
    printf("%d\n",**k);
}