//create a two dimensional vectors using structures in c ;
#include<stdio.h>
struct vector{
    int x ;
    int y ;

};


int main(){
    struct vector s1 , s2 ;
    s1.x=3;
    s1.y=4;
    printf("the value of s1 is %d\n",s1.x);
    printf("the value of s1 is %d\n",s1.y);
    s2.x=5;
    s2.y=7;
    printf("the value of s1 is %d\n",s2.x);
    printf("the value of s1 is %d\n",s2.y);
    return 0;
}