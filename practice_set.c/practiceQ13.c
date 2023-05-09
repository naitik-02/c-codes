//print the no from 0 - n , n is given by the user .
#include<stdio.h>

int main(){
     int num ;
     int i = 0;
     printf("enter no :");
     scanf("%d",&num);

    while (i <=num ){
        printf("%d \n",i);
    
    i++;
    }
    return 0;
}