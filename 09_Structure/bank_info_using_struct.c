#include<stdio.h>
#include<string.h>

typedef struct bank {
    int account_num;
    float balance;
    char name[20];
}bank;

void main(){
    bank customer1, customer2;

    customer1.account_num = 123456789;
    customer1.balance = 200.35;
    strcpy(customer1.name, "Rohan");

    customer2.account_num = 23456789;
    customer2.balance = 2000.35;
    strcpy(customer2.name, "Sohan");

    
    printf("Account number for 1st customer is : %d\n", customer1.account_num);
    printf("Balance for 1st customer is : %f\n", customer1.balance);
    printf("Name number for 1st customer is : %s\n", customer1.name);

    printf("Account number for 2nd customer is : %d\n", customer2.account_num);
    printf("Balance for 2nd customer is : %f\n", customer2.balance);
    printf("Name number for 2nd customer is : %s\n", customer2.name);
    
    
}