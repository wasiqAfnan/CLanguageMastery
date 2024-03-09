#include<stdio.h>
#include<conio.h>

void main(){
    char str[100]="hello world";
    printf("%s\n",str); // print full string
    printf("%.5s\n",str); //print only first 5 charactars of the string
    printf("%10.0s\n",str);//print 10 spaces but 0 element of the string
    printf("%10.5s\n",str);// print 10 spaces but after printing first 5 space last 5 space will print 5 char of string
    printf("%-10.5s\n",str);//print 10 spaces but after printing first 5 space last 5 space will print 5 char of string in right to left order
}
