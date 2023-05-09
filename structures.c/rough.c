// another way to program structure ;
#include<stdio.h>
#include<string.h>

struct employ{
    char name[15];
    int code;
    float salary;

};

int main(){
    struct employ naitik = {"rahul",107,200000};
    printf("name is %s\n",naitik.name);
    printf("code is %d\n",naitik.code);
    printf("salary is %f\n", naitik.salary);
    
    return 0;
}