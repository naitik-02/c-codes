/*
 write a program using a function which calculates the sum and average of two numbers .
 use pointers and print the the value of sum and average  in main();
*/
#include<stdio.h>
void sumaverage (int a , int  b , int  *sum , float *average ){
*sum= a+b ;
*average= (float) (*sum)/2 ;
}
int main(){
     int i , j  ;
     int sum ; 
     float  average ;
     i =3 ; 
     j = 6;
     sumaverage(i,j,&sum , &average) ;
     printf("the value of sum is %d \n ",sum);
     printf("the value of average is %f",average);


    
    
    return 0;
}