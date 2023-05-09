#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    int salary;
    char name[20];
};

void show(struct employee s1){
    printf("the salary of e1 is %d \n",s1.salary);
    printf("the code of e1 is %d \n",s1.code);
    printf("the name of e1 is %s\n",s1.name);
}


int main(){
struct employee e1;
struct employee* ptr;
ptr = &e1;
(*ptr).code=107;
(*ptr).salary=30900000;
strcpy(ptr->name,"naitik");
show(e1);
    
    return 0;
}