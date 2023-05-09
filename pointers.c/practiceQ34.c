// write a program to print the adress of a variable .
// use this adress to get the value of this variable ;
#include<stdio.h>

int main(){
    int a = 4;
    int *ptr;
    ptr= &a ;
    printf("the adress of a is %u \n", ptr);
    printf("the value of a is %d \n",*ptr);
    
    return 0;
}