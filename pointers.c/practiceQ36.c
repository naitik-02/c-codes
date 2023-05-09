//write a program to change the value of a variable to ten times of its current value .
// write a function and pass the value of reference 
#include<stdio.h>
 #include<math.h>

 int change(int *x );

int main(){
    int a = 2 ;
     printf("the 10 times value of a is %u \n",change( &a));
     printf("value of a is %d ", a);
    return 0;
}
int change(int *x ){
    int c ;
    c = pow(*x,10);
    return c ;
}