// print all the odd no from 5 - 50 .
#include<stdio.h>

int main(){
    int i = 5 ;
     for ( i ; i<=50 ; i++ ){ 
         if (i%2==0 ){
            continue;
         }
        printf( "%d \n", i );
     }
    return 0;
}