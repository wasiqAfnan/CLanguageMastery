#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>

struct phoneBook{
    long long int num;
    char name[100];
};

int main(){
    FILE *fp1,*fp2;
    struct phoneBook p1;
    int temp;
    char name[30];

    // fp1 = fopen("Conatct.txt","a+");
    // if(fp1 == NULL){
    //     printf("Error");
    //     exit(0);
    // }

    // printf("How many contact you want to save: ");
    // scanf("%d",&temp);

    // for(int i=0;i<temp;i++){
    //     printf("Enter the name of the contact: ");
    //     scanf("%s",p1.name);

    //     printf("Enter the number of %s: ",p1.name);
    //     scanf("%lld",&p1.num);

    //     fprintf(fp1,"%s %lld\n",p1.name,p1.num);
    // }

    // fclose(fp1);

    // fp1 = fopen("Conatct.txt","r");

    // for(int i=0;i<temp;i++){
    //     fscanf(fp1,"%s %lld",p1.name,&p1.num);
    //     printf("%lld\n",p1.num);
    //     printf("%s\n",p1.name);
    //     printf("\n\n");
    // }

    fp1 = fopen("contact.txt","r+");
    if(fp1 == NULL){
        printf("Error");
        exit(0);
    }

    fp2 = fopen("Copy.txt","a+");
    if(fp2 == NULL){
        printf("Error");
        exit(0);
    }

    printf("Enter name of the contact you want to delete: ");
    gets(name);

    while(!feof(fp1)){
        fscanf(fp1,"%s %lld",p1.name,&p1.num);
        if(strcmp(p1.name,name)){
            fprintf(fp2,"%s %lld\n",p1.name,p1.num);
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("Deleted");
    remove("contact.txt");
    rename("Copy.txt","contact.txt");
    return 0;
}