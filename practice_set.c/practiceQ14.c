// print the sum of all n natural numbers from 0  to n 
#include<stdio.h>

int main(){
    int num ;
    int i ;
    printf("enter n ");
    scanf("%d",&num );
    int sum = 0 ;

     for (i=1 ;i <= num ; ++i ){
        sum = sum + i;
     } printf(" %d\n",sum);
    return 0;
}