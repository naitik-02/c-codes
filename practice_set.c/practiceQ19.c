// print reverse of  the table of number n 
#include<stdio.h>

int main(){
    int num ; 
    int i= 10 ;
    printf("enter no ");
    scanf("%d" , &num ) ;

    for (i ; i>=1 ; i--){
        printf(" %d X %d = %d \n " , num , i , num* i );

        }
    
    return 0;
}