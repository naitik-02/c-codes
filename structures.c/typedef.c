//int this we use type def to chaange the type of structure;
#include<stdio.h>
#include<string.h>
 typedef struct employee{
    int code;
    int salary;
    char name[20];
} hero;

void show(hero s1){
    printf("the salary of e1 is %d \n",s1.salary);
    printf("the code of e1 is %d \n",s1.code);
    printf("the name of e1 is %s\n",s1.name);
}


int main(){
hero e1;
hero* ptr;
ptr = &e1;
(*ptr).code=107;
(*ptr).salary=30900000;
strcpy(ptr->name,"naitik");
show(e1);
    
    return 0;
}