// write a program containing functions which counts the no of positive integers in any array ;
#include <stdio.h>
int integerspn(int *integer, int n){

    for (int i = 0; i < n; i++){
    if (integer[i]< 0){
        printf("the %d no is negative integer\n",integer[i]);

    }
    else{
        printf("%d no is a positive integer \n",integer[i]);
    }
    }
}

// it is wrong
int main()
{
    int integer[] = {1, 2, 3, -4, 5, -6, -7, 8, 9, 10, -11, 12};
    integerspn(integer ,12);
    return 0;
}