#include<stdio.h>

int strlen(char *ptr){
    int len=0;
    
    while(*ptr != '\0'){
        len++;
        ptr++;
    }
    return len;
}
void main(){
    char arr[20]="wasiq afnan ansari";
    int l = strlen(arr);
    printf("%d",l);
}