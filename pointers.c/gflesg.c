#include<stdio.h>

int main(){
    int i = 4 ;
    int *ptr ;
    int **ptrb;
    ptr = &i;
    ptrb= &ptr;
    printf("the value of i is %d ",**ptrb);


    return 0;
}