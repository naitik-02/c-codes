//write a program to illustrate the value of arrow operator  -> in c 
#include<stdio.h>
struct hero{
    int hair ;
    int hand ;
};



int main(){
    struct hero h1  ;
    struct hero *ptr1;
    ptr1=&h1;
    ptr1->hair=100;
    ptr1->hand=2;
    printf("total hair = %d\n",ptr1->hair);
    printf("total hand = %d",ptr1->hand);

    
    return 0;
}