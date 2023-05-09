#include<stdio.h>
//write a program to print average of three numbers.
int main(){
    int num1 ,num2 ,num3 ;
    printf("enter first no ");
    scanf("%d",&num1);
    printf("enter second no ");
    scanf("%d",&num2);
    printf("enter 3rd no ");
    scanf("%d",&num3);
    int average = (num1+num2+num3)/3 ;
     printf("average is %d",average);

    
    return 0;
}