#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct emp{
    int empid;
    float salary;
    char name[20];
}emp;
void main(){
    emp e[3],data;
    FILE *ptr;
    ptr = fopen("data.txt","w");
    printf("Enter the details of 3 employess: \n");
    for(int i=0;i<3;i++){
        fflush(stdin);
        printf("Enter the name: ");
        gets(e[i].name);
        printf("Enter the salary: ");
        scanf("%f",&e[i].salary);
        printf("Enter id: ");
        scanf("%d",&e[i].empid);
    }
    fwrite(e,sizeof(struct emp),3,ptr);
    fclose(ptr);
    ptr = fopen("data.txt","r");
    while(!feof(ptr)){
        fread(&data,sizeof(struct emp),1,ptr);
        printf("%s\t%d\t%f\n",data.name,data.empid,data.salary);
    }

}