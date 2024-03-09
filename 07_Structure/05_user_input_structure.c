#include<stdio.h>

typedef struct bankAccount
{
    int accNo;
    char name[30];
    char type[10];
}bank;

void main(){
    bank customer[3];

    // taking values of all three customer
    for(int i=0;i<3;i++){
       printf("Enter account no: ");
       scanf("%d",&customer[i].accNo);

       printf("Enter account holder name: ");
       fflush(stdin); // this line will prevent getting enter as value from above line
       scanf("%[^\n]",&customer[i].name);

       fflush(stdin);
       printf("account type: ");
       scanf("%[^\n]",&customer[i].type);
    }

    printf("\n\n");

    // printing values of all three customer
    for(int i=0;i<3;i++){
       printf("Account No: %d\n",customer[i].accNo);
       printf("Account Holder Name: %s\n",customer[i].name);
       printf("Account Type: %s\n",customer[i].type);
       printf("\n");
    }
    
}
