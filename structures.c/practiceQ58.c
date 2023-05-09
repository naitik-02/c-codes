//write a program to store the details of three employs from user defined data ,
//use the structure decleared previous ;
#include<stdio.h>
#include<string.h>
 struct employ{
    int code ;
    float salary;
    char name[20];
 };


int main(){
    struct employ e1 , e2 , e3 ;
    printf("enter the name of the  e1 :  ");
    scanf("%s",e1.name);
    printf("enter the code of the  e1 :  ");
    scanf("%d",&e1.code);
    printf("enter the salary of the  e1 :  ");
    scanf("%f",&e1.salary);

    printf("enter the name of the e2 :  ");
    scanf("%s",e2.name);
    printf("enter the code of the e2 :  ");
    scanf("%d",&e2.code);
    printf("enter the salary of the e2:  ");
    scanf("%f",&e2.salary);

    printf("enter the name of the e3:  ");
    scanf("%s",e3.name);
    printf("enter the code of the e3:  ");
    scanf("%d",&e3.code);
    printf("enter the salary of the e3:  ");
    scanf("%f",&e3.salary); 


    return 0;
}