//following operations can be performed on  pointer ;
// 1. addition of a no to a pointer .
// 2. subtraction of a no from a pointer ;
// 3. subtraction of one pointer from another ;
// 4 . comparism of two variable ;

#include<stdio.h>


int main(){
    int i =4 ; int j =6;
    int * a ;int *b;
    a=&i; b =&j;
 int sum = i + *b;
 printf("the addition of i and pointer is %d ",sum);
    
    return 0;
}