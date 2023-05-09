//repeat problem 46 by taking input by user ;
#include<stdio.h>
int table(int *multtable , int num , int n){
    for (int i = 1 ; i<n; i++ ){
    multtable[i]=(num*i);
    printf("%d x %d = %d \n",num ,i , multtable[i]);
}}

int main(){
    int multtable[3][10];
    int num;
    printf("enter the value u want to print table :");
    scanf("%d",&num);
    table(multtable[0],num , 10);

    return 0;
}