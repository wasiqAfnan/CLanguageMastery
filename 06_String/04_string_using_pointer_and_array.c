#include <stdio.h>

void main(){
    //if we initialize a string using array we can not re initialize its content
    /* 
    int arr[]="afnan bhai";
    arr = "very good";
    printf("%s",arr);
    */
    //The above program will give error

    //but if you intialize string using pointer you can re initialize its content

    char *arr="afnan bhai";
    arr="very good";
    printf("%s",arr);
    //this program will work as we initialize string using pointer 
}