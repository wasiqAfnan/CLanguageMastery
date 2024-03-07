#include<stdio.h>

int cpy(char *ptr1, char *ptr2, int n){
    int i = 0;
    while(i<n){
        *(ptr1)=*(ptr2);
        ptr1++;
        ptr2++;
        i++;
    }
    //printf("%s",ptr1);
    

}

void main(){
    char arr1[20]={"wasiq"};
    char arr2[20]={"afnan"};

    cpy(arr1,arr2, 5);
    printf("%s",arr1);
}