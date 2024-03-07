#include <stdio.h>
#include <math.h>

void main(){
    int side;
    double area;
    printf("put the value of the side of the square\n");
    scanf("%d",&side);
    area=pow(side,2);
    printf("%f is the area of your square\n",area);
}