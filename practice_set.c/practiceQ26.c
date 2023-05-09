// finding average by recursion 
#include<stdio.h>
float average (int a, int b , int c );
int main(){
    int a, b , c ;
    printf("enter numbers a" );
    scanf("%d", &a);
     printf("enter numbers b" );
    scanf("%d", &b);
     printf("enter numbers c" );
    scanf("%d", &c);
    printf("the average or a,b,c is %f",average(a,b,c));

    return 0;
}
float average(int a, int b ,int c){
    float result ;
    result = (float)(a + b + c )/3 ;
    return result;
}
