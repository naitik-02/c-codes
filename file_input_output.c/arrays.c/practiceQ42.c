//write a program to create an array of ten integers 
//and store multiplication table of 5 in it .
#include<stdio.h>

int main(){
    int mul[10];
     
     for(int i = 0 ; i <10 ; i++){
    mul[i]=5*(i+1);
        printf("5 X %d = %d \n ",i+1 ,mul[i]);
     }
    return 0;
}