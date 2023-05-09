// print the factorial of a no n 
#include<stdio.h>

int main(){
    int num ;
    int fact =1;
     printf("enter no :");
     scanf("%d",&num);
     for (int i = 1; i <=num ; i++){
        fact = fact*i;
     }
     printf("%d \n ",fact);

    return 0;
}