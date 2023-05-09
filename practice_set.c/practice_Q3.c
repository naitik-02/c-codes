#include<stdio.h>
//write a program  to check if a no is disible by 2 
int main(){
    int n ;
    printf("enter any no :");
    scanf("%d",&n);
    if (n%2==0){
        printf("this no is divisible by 2");
    }
    else{
        printf("not divisible by 2");
    }
    
    return 0;
}