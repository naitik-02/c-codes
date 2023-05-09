// write a program to print the value of a variable by using pointer to pointer type of variable ;
#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr;
    int **ptr_ptr;


    ptr = &i;
    ptr_ptr = &ptr;
    printf("the value of i is %d ", **ptr_ptr);
    return 0;
}