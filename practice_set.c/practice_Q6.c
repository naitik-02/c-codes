#include<stdio.h>
//write a program to check if given character is digit or not 
int main(){
    int chr;
    printf("enter character ");
    scanf("%d",&chr);

    if (chr>=0 && chr<=9){
        printf(" given no is a digit  ");

    }
    else{
        printf("given no is not  a digit ");
        
    }
    return 0;
}