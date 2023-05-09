#include<stdio.h>
#include<string.h>

struct employ{
    int code;
    float salary ;
    char name[20];
};

int main(){
    
    struct employ e1;
    e1.code=100;
    e1.salary=300.000;
    strcpy(e1.name,"naitik");
    printf("the salary of e1 is %.2f \n",e1.salary);
    printf("the code of e1 is %d \n",e1.code);
    printf("the name of e1 is %s\n",e1.name);

    
    return 0;
}