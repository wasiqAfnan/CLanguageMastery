#include <stdio.h>

int sumandavg(int *ptr1, int *ptr2, int *sum, float *avg){
    *sum=*ptr1 + *ptr2;
    *avg=(*sum)/2;
    return 0;
}

void main(){
    int a=5,b=10,sum;
    float avg;
    sumandavg(&a,&b,&sum,&avg);
    printf("the sum is %d\n",sum);
    printf("the avg is %f\n",avg);
}