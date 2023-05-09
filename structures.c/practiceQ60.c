//write a function sumvector which return the 
//sum of two vectors passed to it . the vector must be two dimensional ;
#include<stdio.h>
 typedef struct vector{
    int x ;
    int y ;

}vect;

vect sumvector(vect s1, vect s2){
    vect result;
    result.x=s1.x + s2.x ;
    result.y=s1.y + s2.y;
    return result;
}

int main(){
    vect s1 ,s2 , sum;
    s1.x=4;
    s1.y=8;
    printf("s1 of x is %d\n",s1.x);
    printf("s1 of y is %d\n",s1.y);
    s2.x=6;
    s2.y=9;
    printf("s2 of x is %d\n",s2.x);
    printf("s2 of y is %d\n",s2.y);

    sum = sumvector(s1,s2);
    printf("%d and %d ",sum.x, sum.y);
    return 0;
}