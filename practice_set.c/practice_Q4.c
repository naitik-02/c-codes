#include<stdio.h>
//write a program to check if a program is odd or even 
int main(){
    int n ;
    printf("enter any no  ");
    scanf("%d",&n);
    if(n%2==0){
        printf(" %d is even no\n ",n);

    }
    else{
        printf("%d is odd no\n ",n);
    }
    
    return 0;
}