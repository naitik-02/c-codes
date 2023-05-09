#include<stdio.h>
 int sum (int x , int y );
int main(){
    int a = 4;
    int b = 6;
    printf("the sum of a and b is %d ", sum(a,b));
    return 0;
}
int sum(int x , int y ){
    int c;
    c = x + y ;
    return c ;
}