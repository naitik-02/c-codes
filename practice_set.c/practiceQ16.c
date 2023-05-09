//print all the no from 1 - 10 expect for 6 .
#include<stdio.h>

int main(){
    int num ;
    int i = 1 ;

    for ( i ; i<=10 ; i++){
        if (i==6 ){
            continue;
        }
        printf("%d \n",i);
    }
    
    return 0;
}