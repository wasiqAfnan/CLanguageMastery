#include<stdio.h>
#include<string.h>

// declaraing and definingn a structure
typedef struct bank {
    int account_num;
    float balance;
    char name[20];
}bank;

// typedef is use to assign a nick name or alias to d=the structure

void main(){
    // as we have written typedef we do not need to write 'struct bank' each time while declaring a structure variable. Instead we can use the alias we have give to the structure.

    // declaring 2 variables of type structure bank using the alias
    bank customer1, customer2;

    // initializing values of first var
    customer1.account_num = 123456789;
    customer1.balance = 200.35;
    strcpy(customer1.name, "Rohan");

    // initializing values of first var
    customer2.account_num = 23456789;
    customer2.balance = 2000.35;
    strcpy(customer2.name, "Sohan");

    // prinitng values of first var
    printf("Account number for 1st customer is : %d\n", customer1.account_num);
    printf("Balance for 1st customer is : %f\n", customer1.balance);
    printf("Name number for 1st customer is : %s\n", customer1.name);

    // prinitng values of first var
    printf("Account number for 2nd customer is : %d\n", customer2.account_num);
    printf("Balance for 2nd customer is : %f\n", customer2.balance);
    printf("Name number for 2nd customer is : %s\n", customer2.name);
    
    
}