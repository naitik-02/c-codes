//arrow operatoer // pointers in structures 
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
};

int main(){
    struct employee e1;
    struct employee *ptr ;
    ptr= &e1;
   // (*ptr).code=107;
   // printf("the code is %d",(*ptr).code);
    //this can also be written as a arrow operator 
    ptr->code = 107;
    printf("the code is %d",ptr->code);
    
    return 0;
}